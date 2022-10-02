#include <stdio.h>

int num(); // prototype, no need to add the paramters, even if they do exist here.

int main(void)
{
  printf("%d\n", num());
  return (0);
}

int num()
{
  int num;

  num = 8;
  return (num);
}
