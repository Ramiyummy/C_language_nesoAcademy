/*
Title: Passing an array as an argumen to a function.
*/
#include <stdio.h>

int add(int b[], int lenght)
{
  int sum= 0, i;

  for(i=0; i<lenght; i++)
  {
    sum += b[i];
  }
      return (sum);
}
int main(void)
{
  int a[] = {1, 2, 3, 4}; // 4 elements
  int len = sizeof(a)/sizeof(a[3]);
  printf("%d\n", add(a, len)); //We're not passing the whole array. We're just passing the base address of the array.
  return (0);
}
