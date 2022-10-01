#include <stdio.h>

int main(void)
{
  int a = 10, b = 20, c = 30, d = 40;
  if (a <= b == d > c)  // from left to right, <=, > have higher precedence than the rest, does 1 = 1, thus True;
  {
    printf("True\n");
  }
 else
  {
    printf("False\n");
  }
  return (0);
}
