#include <stdio.h>
#include <string.h>

int main()
{
  const int COUNT = 4;

  // Store Data
  FILE *outputFile = fopen("8-a-ct-marks.txt", "w");

  if (outputFile == NULL)
  {
    printf("Error opening output file");
    return 1;
  }

  for (int i = 0; i < COUNT; i++)
  {
    char roll[20];
    int marks;

    printf("Info of Student %d\n", i + 1);

    printf("Roll: ");
    fgets(roll, sizeof(roll), stdin);
    roll[strcspn(roll, "\n")] = '\0';

    printf("Marks: ");
    scanf("%d", &marks);
    getchar();

    fprintf(outputFile, "%s : %d\n", roll, marks);
  }

  fclose(outputFile);
  printf("Data saved to 8-a-ct-marks.txt");

  return 0;
}
