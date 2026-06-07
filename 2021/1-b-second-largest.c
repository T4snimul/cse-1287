#include <stdio.h>

int largest, secondLargest;
void findSecondLargest(int arr[], int index, int length);

int main()
{
  int array[6] = {10, 13, 28, 32, 26, 18};
  int length = sizeof(array) / sizeof(array[0]);

  findSecondLargest(array, 0, length);

  printf("Second Largest: %d\n", secondLargest);

  return 0;
}

void findSecondLargest(int arr[], int index, int length)
{

  if (index == length)
    return;

  if (arr[index] > largest)
  {
    secondLargest = largest;
    largest = arr[index];
  }
  else if (arr[index] > secondLargest && arr[index] != largest)
  {
    secondLargest = arr[index];
  }

  findSecondLargest(arr, index + 1, length);
}
/*
1. Start
2. Set A[N] = array of N elements
3. Set largest ← A[0], secondLargest ← A[0]

Procedure Find(i)
    If i = N Then
        Return
    End If

    If A[i] > largest Then
        secondLargest ← largest
        largest ← A[i]

    Else If A[i] > secondLargest Then
        secondLargest ← A[i]
    End If

    Find(i + 1)
End Procedure

4. Find(1)
5. Print secondLargest
6. End Algorithm
*/
