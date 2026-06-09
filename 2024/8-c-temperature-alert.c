#include <stdio.h>

void printTemperatures(float temperatures[], int index, int size)
{
  // Base case
  if (index >= size)
    return;

  printf("%.2f", temperatures[index]);

  if (temperatures[index] > 100)
    printf(" ALERT!");

  printf("\n");

  // Recursive case
  printTemperatures(temperatures, index + 1, size);
}

int main()
{
  float temperatures[5] = {98.5f, 76.23f, 101.83f, 88.12f, 105.55f};

  printf("Sensor readings\n");

  printTemperatures(temperatures, 0, 5);

  return 0;
}
