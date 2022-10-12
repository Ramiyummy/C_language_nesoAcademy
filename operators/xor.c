#include <stdio.h>
// XOR = Exclusive OR. 

int main(void)
{
  char a = 4, b = 3;
  a = a ^ b; // 0000 0100 ^ 0000 0011 = 0000 0111 = 7
  b = a ^ b; // 0000 0111 ^ 0000 0011 = 0000 0100 = 4
  a = a ^ b; // 0000 0111 ^ 0000 0100 = 0000 0011 = 3

  printf("After XOR, a = %d and b = %d\n", a, b );
  return (0);
}
