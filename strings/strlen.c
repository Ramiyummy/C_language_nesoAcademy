/*
-Prototype: size_t strlen(const char* str);
-size_t: is an unsigned integer type of at least 64 bits on a 64-bit system.
-strlen: used to determine the len of the given str.
-strlen: it doesnt count '\0' at all.
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
  char *str = "Hello World";
  int len = strlen(str);
  printf("%d", len);

  return (0);
}
