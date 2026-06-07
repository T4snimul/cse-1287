#include <stdio.h>

struct AutonomousRobot
{
  int agent;
  int flywheel;
  float speed;
  float ss;
  char SensorName[60];
  double control;
};

// Suggestion
union AutonomousRobot2
{
  int agent;
  int flywheel;
  float speed;
  float ss;
  char SensorName[60];
  double control;
};

int main()
{
  printf("Size with struct: %zu bytes\n", sizeof(struct AutonomousRobot));
  printf("Size with union: %zu bytes\n", sizeof(union AutonomousRobot2));

  /*
    The largest member is: char SensorName[60] which is 60 bytes.

    However, the union must be aligned for its most strictly aligned member (double), which typically requires 8-byte alignment.

    So the union size is rounded up to the nearest multiple of 8:
      60→64
  */

  return 0;
}
