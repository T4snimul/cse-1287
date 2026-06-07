#include <stdio.h>

void printMatrix(int matrix[3][3]);

int main()
{
  int matrix[3][3], transpose[3][3], i, j;

  // input matrix elements
  printf("Enter elements of the matrix A (3x3): \n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("A_%d%d: ", i + 1, j + 1);
      scanf("%d", &matrix[i][j]);
      transpose[j][i] = matrix[i][j];
    }
  }
  printf("\n");

  // display
  printf("Entered matrix: \n");
  printMatrix(matrix);

  printf("\nTranspose of the matrix: \n");
  printMatrix(transpose);

  return 0;
}

void printMatrix(int matrix[3][3])
{
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
}
