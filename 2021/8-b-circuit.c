#include <stdio.h>

int main()
{
  /*
    Equations:
      2V1 - V2 = 4
      V1 = 2V2

      2(2V2) - V2 = 4 => V2 = 4 / 3;
  */
  float V2 = 4.0 / 3.0;
  float V1 = 2 * V2;

  printf("V1 = %.2f V\nV2 = %.2f V\n", V1, V2);

  return 0;
}
