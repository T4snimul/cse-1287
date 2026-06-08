#include <stdio.h>

int main()
{
  int operation, num1, num2;

  printf("Enter 2 numbers: ");
  scanf("%d %d", &num1, &num2);

  printf("\n1. Addition\n2. Substraction\n3. Multiplication\n4. Division\n");
  printf("\nSelect Operation (number): ");
  scanf("%d", &operation);

  switch (operation)
  {
  case 1:
    printf("\nSum: %d\n", num1 + num2);
    break;

  case 2:
    printf("\nDifference: %d\n", num1 - num2);
    break;

  case 3:
    printf("\nProduct: %d\n", num1 * num2);
    break;

  case 4:
    printf("\nQuotient: %d\n", num1 / num2);
    break;

  default:
    printf("\nInvalid Choice\n");
    break;
  }

  return 0;
}
