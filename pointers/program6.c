#include <stdio.h>

int f(int *a, int n)
{
  if (n <= 0) return 0;
  else if (*a % 2 == 0) return *a +f(a+1, n-1); // 12 + f(&a[1], 5)
  else return *a - f(a+1, n-1);
  
}
int main(void)
{
  int a[] = {12, 7, 13, 4, 11, 6};
  printf("%d", f(a, 6));
  getchar();
  return (0);
}
