#include <stdio.h>
// the forumula to use is: n number for rows, and n*2 -1 for columns.
int main(void)
{
  int i, j, n;

  printf("How many rows you want in your pyramid?\n");
  scanf("%d", &n);

  for (i =1; i <= n; i++)
    {
      for (j = 1; j <= 2*n - 1; j++)
        {
          if (j >= n -(i-1) && j <= n+(i-1))
          {
            printf("*");
          }
        else {
          printf(" ");
        }
        }
      printf("\n");
    }
	return (0);
}
