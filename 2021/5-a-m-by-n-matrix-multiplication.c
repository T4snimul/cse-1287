#include <stdio.h>

void multiplyMatrix(int A[][10], int B[][10], int C[][10], int r1, int c1, int c2)
{
  for (int i = 0; i < r1; i++)
  {
    for (int j = 0; j < c2; j++)
    {
      C[i][j] = 0;

      for (int k = 0; k < c1; k++)
      {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }
}

int scanDimention(char message[])
{
  int dimention;
  printf(message);
  scanf("%d", &dimention);
  return dimention;
}

void inputMatrix(int matrix[][10], int rows, int columns, char name)
{
  printf("Enter the elements of Matrix: %c\n", name);
  for (int i = 0; i < rows; i++)
    for (int j = 0; j < columns; j++)
      scanf("%d", &matrix[i][j]);
}

int main()
{
  int A[10][10], B[10][10], C[10][10];

  // Input Matrix A
  int r1 = scanDimention("Row count for Matrix A: ");
  int c1 = scanDimention("Column count for Matrix A: ");
  inputMatrix(A, r1, c1, 'A');

  // Input Matrix B
  int r2 = c1;
  int c2 = scanDimention("Column count for Matrix B: ");
  inputMatrix(B, r2, c2, 'B');

  // Multiply
  multiplyMatrix(A, B, C, r1, c1, c2);

  // Print Result
  printf("\nProduct\n");
  for (int i = 0; i < r1; i++)
  {
    for (int j = 0; j < c2; j++)
      printf("%d ", C[i][j]);

    printf("\n");
  }

  return 0;
}
