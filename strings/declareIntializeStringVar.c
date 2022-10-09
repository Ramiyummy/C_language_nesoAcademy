/*
-String Var: is a 1D array of characters that is capable of holding a string at a time.
-Note: alwasy make the array one char longer than the string for the null char.
 */
#include <stdio.h>

int main(void)
{
  char string[6] = "Hey!"; // 'H' 'e' 'y' '!' '\0' '\0'. Extra rooms get filled with '\0'
  string[0] = 'Y'; // We can modify this string, because its assigned to an array.
  *string = 'Y';
  //char *ptr = "Rami";
  //*ptr = 'S'; // We cannot modify a string literal
  printf("%s\n", string);

  //example;
  char s[5] = "hello";
  char t[5];

  int i;
  for (i=0; s[i] != '\0'; i++)
    {
      t[i] = s[i];
    }
  printf("%s\n", t);
  return (0);
}
