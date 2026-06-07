#include <stdio.h>

int main()
{
  // Input Numbers
  int count;
  printf("Count: ");
  scanf("%d", &count);
  int numbers[count];

  for (int i = 0; i < count; i++)
  {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &numbers[i]);
  }

  // Sort According to Descending Order
  int reverse[count];
  for (int i = 0; i < count; i++)
    reverse[i] = numbers[count - i - 1];

  // Print Reversed Array
  printf("Reversed: ");
  for (int i = 0; i < count; i++)
    printf("%d ", reverse[i]);

  return 0;
}
