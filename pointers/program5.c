#include <stdio.h>

void f(int *p, int *q)
{
  p = q; // p = q addres
  *p = 2; // the address of p pointing to will contain 2
}
int i = 0, j = 1; // p = address of i, q = &j. p = &j, j=2
int main(void)
{
  f(&i, &j);
  printf("%d %d\n", i, j);
  return (0);
}
