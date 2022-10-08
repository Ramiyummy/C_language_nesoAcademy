/*
program: Reverse a series of numbers using pointers.
*/
#include <stdio.h>
#define N 5

int main(void)
{
  int a[N], *p;

  printf("Enter the %d elements of the array:\n", N);
  for (p=a; p<=a+N-1; p++)
  {
    scanf("%d", p);
  }
  printf("Thanks for your collborations.\nHere the elements in reverse order: ");

  for(p=a+N-1; p>=a; p--)
  {
    printf("%d ", *p);
  }
  return (0);
}
