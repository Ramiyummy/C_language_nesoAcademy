// shitty shit.
#include <stdio.h>

void fun1(int n)
{
  if (n == 0)
  {
    return;
  }
  fun1(n/2);
  printf("%d", n%2);
}
/////////////////////////////////

void fun2(int n)
{
  if (n <= 0)
  {
    return;
  }
  printf("%d ", n);
  fun2(2*n);
  printf("%d ", n);
}

int main(void)
{
  fun1();
  printf("\n\n\n");a
  fun2();
  return (0);
}
