/*
-String Var: is a 1D array of characters that is capable of holding a string at a time.
-Note: alwasy make the array one char longer than the string for the null char.
 */
#include <stdio.h>

int main(void)
{
  char string[5] = "Hey!"; // 'H' 'e' 'y' '!' '\0'
  string[0] = 'Y'; // We can modify this string, because its assigned to an array.
  //char *ptr = "Rami";
  //*ptr = 'S'; // We cannot modify a string literal
  printf("%s\n", string);
  return (0);
}
