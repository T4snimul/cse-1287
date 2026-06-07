#include <stdio.h>

int main()
{
  long long binary;
  int decimal = 0;
  int powerOfTwo = 1;

  printf("Enter a binary: ");
  scanf("%lld", &binary);

  while (binary > 0)
  {
    int digit = binary % 10;
    decimal += digit * powerOfTwo;
    powerOfTwo *= 2;
    binary /= 10;
  }

  printf("Equivalent decimal: %d", decimal);

  return 0;
}
