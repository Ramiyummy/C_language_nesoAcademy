/*
String Literal(constant): is a sequence of characters enclosed withing double quotes.
*/
#include <stdio.h>

int main(void)
{
  printf("%s","al salam 3alaykom :)\n");
  printf("%s\n", "No guts, no glory.  \
  --Rami Bayoumi"); //Consider the spaces before --

    printf("%s", "No guts, no glory. "
    "--Rami Bayoumi"); //Does not consider the indentatation before --
  return (0);
}
