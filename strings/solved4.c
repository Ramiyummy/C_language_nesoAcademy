#include <stdio.h>

void foo(char *a)
{
  if (*a && *a != ' ')
  {
    foo(a+1);
    putchar(*a);
  }
}

int main(void)
{
  foo("ABCD EFGH");
  return 0;
}
