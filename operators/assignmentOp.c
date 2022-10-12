#include <stdio.h>

int main(void)
{
  char a = 7; // 0000 0111
  a ^= 5; //     0000 0111 ^ 0000 0101 = 0000 0010 = 2
  printf("%d", printf("%d", a+=3)); // 2 + 3 = 5, and there is 1 character, thus: 51. :)
  return (0);
}
