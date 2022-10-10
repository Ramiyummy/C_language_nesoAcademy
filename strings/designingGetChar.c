/*
We want our input function to have following functionalities:
1. It must continue to read the string even after seeing white psace characters.
2. It must stop reading the string after seeing the newline character.
3. It must discard extra characters.
4. And, it must return the number of characters it stores in the character array.
*/
#include <stdio.h>

int input(char str[], int n)
{
  int ch, i=0;
  while ((ch = getchar()) != '\n') 
    {
      if (i<n)
      {
        str[i++] = ch;
      }
      str[i] ='\0';
    }
  return (i);
}

int main(void)
{
  char str[100];
  int n = input(str, 50);
  printf("%d %s", n, str);
  return (0);
}
