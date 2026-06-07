#include <stdio.h>

int main()
{
  int rows = 4, n = 1;
  for (int i = 1; i <= rows; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("%d ", n++);
    }

    printf("\n");
  }

  return 0;
}
