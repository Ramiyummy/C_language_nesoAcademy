#include <stdio.h>

void swap (int *x, int *y)
{
  static int *temp;
  temp = x;
  x = y;
  y = temp;
}

void printab()
{
  static int i, a = -3, b = -6;
  i = 0;
  while (i <= 4)
    {
      if ((i++)%2 == 1) continue;
      a = a+i; // 6
      b = b+i; // 3
    }
  swap(&a, &b); //  i = 5, a =3, b =6
  printf("a = %d, b = %d\n", a, b);
}
int main(void)
{
  printab();
  printab();
  return (0);
}
