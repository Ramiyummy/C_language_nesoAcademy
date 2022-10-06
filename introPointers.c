// &: address of operator, *: value of operator.
#include <stdio.h>

int main(void)
{
  int *lol;
  int x = 5, *ptr = &x;
  *ptr = 4;

  printf("%d %d\n", *ptr, *lol);
  return (0);
}
