#include <stdio.h>
#include <string.h>

struct Person
{
  char name[50];
  char id;
  char mobile[20];
  char city[50];
};

struct CityPopulation
{
  char city[50];
  int population;
};

int main()
{
  FILE *fp;
  struct Person person;
  struct CityPopulation cities[100];

  fp = fopen("2021-7-b-input.txt", "r");

  if (fp == NULL)
  {
    printf("Counld not open 2021-7-b-input.txt");
    return 1;
  }

  int cityCount = 0;

  while (fscanf(fp, "%s %d %s %s", person.name, &person.id, person.mobile, person.city) == 4)
  {
    int found = 0;

    for (int i = 0; i < cityCount; i++)
    {
      if (strcmp(person.city, cities[i].city) == 0)
      {
        cities[i].population++;
        found = 1;
        break;
      }
    }

    if (!found)
    {
      strcpy(cities[cityCount].city, person.city);
      cities[cityCount].population = 1;
      cityCount++;
    }
  }

  fclose(fp);

  printf("City Population Report:\n\n");

  for (int i = 0; i < cityCount; i++)
    printf("%s : %d\n", cities[i].city, cities[i].population);

  return 0;
}
