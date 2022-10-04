#include <stdio.h>

int main(void)
{
  int i;

  int arr[9] = {34, 56, 54, 32, 67, 89, 90, 32, 21};
  for (i=8; i > -1; i--)
    {
      printf("%d ", arr[i]);
    }
  return (0);
}
