#include <stdio.h>

int main(void)
{
  int arr[10] = {[0] = 1, [5] = 2, [6] = 3};
  printf("%d\n", arr[0]);
  return (0);
}
