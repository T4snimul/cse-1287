#include <stdio.h>

int factorial(int n);

int main()
{
  int n, fact;
  printf("Enter a number: ");
  scanf("%d", &n);

  fact = factorial(n);

  printf("Fractorial: %d\n", fact);

  return 0;
}

int factorial(int n)
{
  if (n == 1)
    return 1;

  return n * factorial(n - 1);
}
