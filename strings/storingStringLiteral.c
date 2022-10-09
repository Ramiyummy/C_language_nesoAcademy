/*
-String literals are stored as an array of characters, with a null character in the end.
-In C, compiler treats a string literal as a pointer to the first character.
-So to the printf or scaf, we are passing a pointer to the first character of a string literal.
-So both printf/scanf functions except a character pointer(char*) as an argument.
*/
#include <stdio.h>

int main(void)
{
  printf("%s", "Rami"); //equivalent to passing a pointer(address) to the lettter 'R'.
  return (0);
}

