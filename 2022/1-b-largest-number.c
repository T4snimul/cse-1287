#include <stdio.h>

int inputNumber();

int main()
{
  int a = inputNumber();
  int b = inputNumber();
  int c = inputNumber();

  int largestNumber = a;

  if (b > largestNumber)
  {
    largestNumber = b;
  }
  if (c > largestNumber)
  {
    largestNumber = c;
  }

  printf("\nLargest Number: %d\n", largestNumber);

  return 0;
}

int inputNumber()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  return n;
}
