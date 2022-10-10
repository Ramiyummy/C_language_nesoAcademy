/*
-Prototype: strncpy(dest, src, sizeof(dest)).
-strncpy: will leave the str in str2(dest) without a '\0', if sizeof(str1(src)) >= sizeof(str1(dest)).
-must add '\0'.
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
  char str1[6] = "Hello";
  char str2[6];

  strncpy(str2, str1, sizeof(str2));
  str2[sizeof(str2) - 1] = '\0';

  printf("%s", str2);
  return (0);
}
