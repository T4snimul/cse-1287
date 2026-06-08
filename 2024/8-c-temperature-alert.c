#include <stdio.h>

int main()
{
  float temperatures[5] = {98.5f, 76.23f, 101.83f, 88.12f, 105.55f};

  printf("Sensor readings\n");
  for (int i = 0; i < 5; i++)
  {
    printf("%0.2f", *(temperatures + i));

    if (*(temperatures + i) > 100)
      printf(" ALERT!");

    printf("\n");
  }

  return 0;
}
