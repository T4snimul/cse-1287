#include <stdio.h>

int main(void)
{
  int a[] = {10, 20, 30};
  int i = 1;
  printf("%d %d\n", a[i], i[a]);

  /*
    i[a]
    = *(i + a)
    = *(a + i)
    = a[i]

    Output: 20 20
  */

  return 0;
}
