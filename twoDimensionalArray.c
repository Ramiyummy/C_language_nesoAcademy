#include <stdio.h>

int main(void)
{
  int i, j;
  int a[5] = {1, 2, 3, 4, 5}; //two dimensional array
  int b[2][3] = {{1, 2, 3},
                 {4, 5, 6}};
  int c[3][4][5]; //three dimensional array

  //print 1D array elements:
  for (i =0; i < 5; i++)
    {
      printf("%d", a[i]);
    }
  printf("\n");
  
  //print 2D array elements:
  for(i=0; i<2; i++)
  {
    for(j=0; j<3; j++)
    {
      printf("%d", b[i][j]);
    }
    printf("\n");
  }
  return (0);
}
