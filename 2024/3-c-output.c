#include <stdio.h>

int main()
{
  char *s = "computer";
  printf("%c %c %c", *(s + 1), *(s + 3), *(s + 6));
  // *(s + x) is equivalent to s[x].
  // Output: o p e
}
