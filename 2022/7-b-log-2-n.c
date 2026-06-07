#include <stdio.h>

int main()
{
  int n, logValue = 0;
  printf("Enter a number: ");
  scanf("%d", &n);

  while (n > 1)
  {
    n /= 2;
    logValue++;
  }

  printf("log2(n) = %d\n", logValue);

  return 0;
}
