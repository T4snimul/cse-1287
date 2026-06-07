#include <stdio.h>

struct Student
{
  int roll;
  float cgpa;
};

int main()
{
  struct Student students[10];

  // Input Data
  for (int i = 0; i < 10; i++)
  {
    printf("Student %d\n", i + 1);

    printf("Roll: ");
    scanf("%d", &students[i].roll);

    printf("CGPA: ");
    scanf("%f", &students[i].cgpa);

    printf("\n");
  }

  // Open file for writing
  FILE *file = fopen("students-data.txt", "w");

  if (file == NULL)
  {
    printf("Error opening file\n");
    return 1;
  }

  // Write data to file
  fprintf(file, "Roll\t\tCGPA\n");

  for (int i = 0; i < 10; i++)
  {
    fprintf(file, "%d\t%.2f\n", students[i].roll, students[i].cgpa);
  }

  fclose(file);
  printf("Data saved to students-data.txt");

  return 0;
}
