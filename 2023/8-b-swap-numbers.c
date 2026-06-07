#include <stdio.h>

int main()
{
  int a = 23, b = 13;

  printf("a: %d\n", a);
  printf("b: %d\n", b);

  printf("swaping...\n");

  // Logic Start
  b = a + b;
  a = b - a;
  b = b - a;

  /* Alternatively:
      a = a + b
      b = a - b
      a = a - b
  */
  // Logic End

  printf("a: %d\n", a);
  printf("b: %d\n", b);

  return 0;
}
