#include <stdio.h>

int main()
{
  const float PI = 3.1416f;
  int radius;

  printf("Enter the radius of a circle: ");
  scanf("%d", &radius);

  printf("\nArea: %.2f square units", PI * radius * radius);
  printf("\n");

  return 0;
}
