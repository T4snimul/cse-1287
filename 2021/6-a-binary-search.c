#include <stdio.h>

int binarySearch(int array[], int left, int right, int target)
{
  if (left > right)
  {
    return -1;
  }

  int middle = left + (right - left) / 2;

  if (target == array[middle])
    return middle;

  if (target > array[middle])
    return binarySearch(array, middle + 1, right, target);

  return binarySearch(array, left, middle - 1, target);
}

int main()
{
  int numbers[] = {2, 5, 8, 12, 16, 23, 38, 56};
  int length = sizeof(numbers) / sizeof(numbers[0]);

  int target;
  printf("Enter a number to search: ");
  scanf("%d", &target);

  int index = binarySearch(numbers, 0, length - 1, target);

  if (index == -1)
    printf("Number not found");
  else
    printf("Number found at index %d", index);

  return 0;
}
