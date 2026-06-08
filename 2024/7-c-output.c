#include <stdio.h>

int main()
{
  struct
  {
    int a : 3;
    unsigned int b : 2;
  } s;

  s.a = 7; // 111 -> 2's complement -> 001 <- magnitude; MSB = 1 -> sign: negative
  s.b = 3;

  printf("%d", s.a, s.b);
  // Output: -1
}
