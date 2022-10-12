#include <stdio.h>

static int fun(int a, int b) //this function can only be accesses withing this file.
{
  return (a + b);
}

int main(void)
{
  int x = 2, y = 4;
  printf("%d\n", fun(x, y));
  return (0);
}
