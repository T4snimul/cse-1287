#include <stdio.h>
#include <math.h>

int main()
{
  printf("Prime numbers between 1 to 100:\n");
  for (int i = 2; i <= 100; i++)
  {
    int isPrime = 1;

    for (int j = 2; j <= sqrt(i); j++)
    {
      if (i % j == 0)
      {
        isPrime = 0;
        break;
      }
    }

    if (isPrime)
      printf("%d ", i);
  }

  return 0;
}
