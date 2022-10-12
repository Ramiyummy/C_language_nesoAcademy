#include <stdio.h>

int main(void)
{
  int a = 5, b = 3, c, d;
  c = (a < b) && (b++);
  d = (a > b) || (a++);

  printf("c=%d\n", c); // 0
  printf("b=%d\n", b); // 3
  printf("d=%d\n", d); // 1
  printf("a=%d\n", a); // 5
  return (0);
}
