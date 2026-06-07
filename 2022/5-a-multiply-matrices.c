#include <stdio.h>
#include <ctype.h>

void inputMatrix(int matrix[3][3], char name);
void printMatrix(int matrix[3][3]);

int main()
{
  int a[3][3];
  int b[3][3];
  int result[3][3];
  inputMatrix(a, 'a');
  inputMatrix(b, 'b');

  for (int i = 0; i < 3; i++)
  {

    for (int j = 0; j < 3; j++)
    {
      result[i][j] = 0;

      for (int k = 0; k < 3; k++)
      {
        result[i][j] += a[i][k] * b[k][j];
      }
    }
  }

  printf("\nResult\n");
  printMatrix(result);

  return 0;
}

void inputMatrix(int matrix[3][3], char name)
{
  printf("Enter matrix %c\n", toupper(name));
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%c_%d%d: ", name, i + 1, j + 1);
      scanf("%d", &matrix[i][j]);
    }
  }
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
