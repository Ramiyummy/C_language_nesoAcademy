#include <stdio.h>

int main(void)
{
  int i, j, k;
  int a[2][2][3] = { 
                   {{1, 2, 3}, {4, 5, 6}}, //first 2D array
                   {{7, 8, 9}, {10, 11, 12}} //second 2D array
                   };
  //print 3D array element
  for(i=0; i<2; i++)
  {
    for(j=0; j<2; j++)
    {
      for(k=0; k<3; k++)
          {
            printf("%d", a[i][j][k]);
          }
          printf("\n");
    }
  }
  return (0);
}
