#include <stdio.h>
#include <ctype.h>

int main()
{
  char str[1000];
  int freq[256] = {0}, vowelCount = 0, consonantCount = 0, i;

  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  printf("\n");

  for (i = 0; str[i]; i++)
  {
    unsigned char ch = tolower(str[i]);

    if (isalpha(ch))
    {
      freq[ch]++;

      if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        vowelCount++;
      else
        consonantCount++;
    }
  }

  for (i = 0; i < 256; i++)
  {
    if (freq[i])
      printf("%c: %d\n", toupper(i), freq[i]);
  }

  printf("Vowels: %d\n", vowelCount);
  printf("Consonants: %d\n", consonantCount);

  return 0;
}
