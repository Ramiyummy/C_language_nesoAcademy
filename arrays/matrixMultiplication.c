//In order to multiply two matrices, #columns of 1st matrix == #rows of 2nd matrix. a[3][3] = b[3][3];
#include <stdio.h>
#define MAX 50
int main(void)
{
  int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX];
  int ar, ac, br, bc;
  int i, j, k;
  int sum = 0;
  
  //Number of rows and columns of first matrix: 
  printf("Enter the rows and columns of the matrix a: ");
  scanf("%d %d", &ar, &ac);
  
  //Elemnts of the first matrix:
  printf("Enter the elements of the matrix a:\n");

  for(i=0; i<ar; i++)
  {
    for(j=0; j<ac; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }

  printf("Enter the rows and columns of the matrix b:\n");
  scanf("%d %d", &br, &bc);

  if(br != ac)
  {
    printf("Soory! it's not possible to multiply the two matrices");
  }
  else
  {
    printf("Enter the elements of the matrix b:\n");

    for (i=0; i<br; i++)
    {
      for(j=0; j<bc; j++)
      {
        scanf("%d", &b[i][j]);
      }
    }
  }
  printf("\n");

  //Resultant matrix

  for(i=0; i<ar; i++)
  {
    for(j=0; j<bc; j++)
    {
      for(k=0; k<br; k++)
      {
        sum += a[i][k] *  b[k][j];
      }
          c[i][j] = sum;
          sum=0;
    }
  }
  //printint the resultant matrix
  printf("Resultant matrix:\n");
  for(i=0; i<ar; i++)
  {
    for(j=0; j<bc; j++)
    {
      printf("%d ", c[i][j]);
    }
      printf("\n");
  }
  return (0);
}
