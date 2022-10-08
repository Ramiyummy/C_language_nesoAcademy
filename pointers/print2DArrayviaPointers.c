/*
Row major order: Elements are stored row by row
Column major order: Elements are stored column by column
Fact: C stores Multidimensional array elements in Row Major Order
*/
#include <stdio.h>

int main(void)
{
  int *p;
  int a[2][2] = {{1, 2},
                 {3, 4}};
  // we can print the content of 2D array with one for loop Using Pointers :)
  for (p = &a[0][0]; p<=&a[1][1]; p++)
  {
    printf("%d ", *p);
  }
  
  return (0);
}
