/*
-Prototype: char* strcat(char* str1, const char char* str2);
-strcat: appends the content of str2 at the end of the str1.
-return: it returns the pointer to the resulting str1.
-An undefined behaviour can be observedif size of str1 isnt long enough to accomodate
the additional characters of str2.
----------------------------------------------------------------------------------------------------
-strncat: it appends the limited number of chars specified by the 3rd argument passed to it.
-strncat: automatically adds the '\0' at the end of the resultant string.
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
  //example1:

  char str1[100], str2[100];
  strcpy(str1, "Welcome to ");
  str1[sizeof(str1)-1] = '\0';
  strcpy(str2, "our Academy");
  str2[sizeof(str2)-1] = '\0';
  strcat(str1, str2);

  printf("%s", str1);

  //strncat:

  char str3[5], str4[100];
  strcpy(str3, "He");
  strcpy(str4, "llo!");
  strncat(str3, str4, sizeof(str1) - strlen(str1) -1); //sizeof(str1): size of the array, strlen(str1):lenght of the string.
  str3[4] = '\0';
  printf("%s", str3);
  return (0);
}
