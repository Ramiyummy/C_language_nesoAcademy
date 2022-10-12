#include <stdio.h>

int main(void)
{
  int n, i;

  printf("Enter the number of elements you want to reverse: \n");
  scanf("%d", &n);

  int a[n];
  printf("Enter all the %d elements: \n", n);
  for (i=0; i<n; i++)
    {
      scanf("%d ", &a[i]);
    }

  printf("Elements in reverse order are: \n");
  for (i=n-1; i>-1; i--)
    {
      printf("%d ", a[i]);
    }
  return (0);
}
