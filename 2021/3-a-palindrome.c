#include <stdio.h>
#include <string.h>

int main()
{
  char str[1000];
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);

  str[strcspn(str, "\n")] = '\0';
  int length = strlen(str);
  int palidrome = 1;

  for (int i = 0; i < length / 2; i++)
  {
    if (str[i] != str[length - i - 1])
    {
      palidrome = 0;
      break;
    }
  }

  if (palidrome)
  {
    printf("String is a palindrome.\n");
  }
  else
  {
    printf("String is not a palindrome.\n");
  }

  return 0;
}
