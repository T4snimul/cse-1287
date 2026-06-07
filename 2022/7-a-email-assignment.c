#include <stdio.h>
#include <string.h>

int main()
{
  FILE *inputFile = fopen("students.txt", "r");
  FILE *outputFile = fopen("emails.txt", "w");

  if (inputFile == NULL || outputFile == NULL)
  {
    printf("Error opening files");
    return 1;
  }

  char name[100];

  while (fgets(name, sizeof(name), inputFile) != NULL)
  {
    // Remove new line
    name[strcspn(name, "\n")] = '\0';

    char *firstName = strtok(name, "-");
    char *lastName = strtok(NULL, "-");

    if (firstName != NULL && lastName != NULL)
    {
      fprintf(
          outputFile,
          "%c%c%c%c@student.ruet.ac.bd\n",
          firstName[0],
          firstName[1],
          lastName[0],
          lastName[1]);
    }
  }

  fclose(inputFile);
  fclose(outputFile);

  printf("Emails generated successfully\n");

  return 0;
}
