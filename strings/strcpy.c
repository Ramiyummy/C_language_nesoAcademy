/*
-Prototype: char* strcpy(char * dest, const char* src).
-const char* source: because the source isn't modified. That is why it is constant, we're just copying it to dest.
-strcpy: is used to copy a string pointed by source(including '\0') to the dest(char array).
-strcpy: returns the pointer to the 1st char of the str which is copied in the dest.Thus, the pointer to 1st char in src.
-strcpy: doesnt check whether the str pointed by source will fit in dest(char array).
-If (srcLen > destLen) return (undefined behaviour).
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
  char str1[5] = "Rami"; //source
  char str2[5]; //Destination

  strcpy(str2, str1);
  printf("%s\n", str2);
  //We can also chain together a series of strcpy calls:

  char str3 [5];
  strcpy(str3, strcpy(str2, str1));
  printf("%s", str3);
  return (0);
}
