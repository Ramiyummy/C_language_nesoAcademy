#include <stdio.h>

int main(void)
{
  int a[][3] = {1, 2, 3, 4, 5, 6}; // 2D array: 2 rows, 3 columns.
  int (*ptr) [3] = a; // &a[0]
  printf("%d %d ", (*ptr)[1], (*ptr)[2]); //  
  ++ptr;
  printf("%d %d", (*ptr)[1], (*ptr)[2]); 
  return (0);
}
