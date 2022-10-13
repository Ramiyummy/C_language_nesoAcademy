/*
-title: Call by Reference, and Call by Value
*/
#include <stdio.h>
void fun(int*, int*); // prototype of fun
int main(void)
{
  int x = 10, y = 20;

  fun(&x, &y);
  printf("x = %d, y = %d\n", x, y);
  return (0);
}

void fun(int *pntr1, int *pntr2) // pntr1 = address of x, pntr2 = address of y
{
  *pntr1 = 30; // * changes the value in the address of pntr1 which is x.
  *pntr2 = 50; // * changes the value in the address of pntr2 which is y.
}
