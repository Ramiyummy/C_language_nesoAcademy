#include <stdio.h>

int main(void)
{
  int a, b;

  a = 4;
  b = 3;

  //printf("a=4, b=3\n a+++b = %d\n", (a+++b)); // after leximcals anlysis it looks like this: a++ + b. [a] [++] [+] [b].
  //printf("a + ++b = %d\n", a + ++b);
  printf("%d\n", a+++++b); // scanner: |a| |++| |++| |+| |b| >> a++ ++ + b >> error. :(
 
  return (0);
}
