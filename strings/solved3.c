#include <stdio.h>

int main(void)
{
  char c[] = "GATE2011";
  char *p = c;
  printf("%s", p + p[3] - p[1]); // Always remember that character is internally represented as integer only
  return (0);
}
