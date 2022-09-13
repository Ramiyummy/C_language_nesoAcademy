#include <stdio.h>
// Left Shift op:  first op << second op
// first: whose bits get left shifted.
// second: decides the number of places to shift the bits.
int main(void)
{
  char var = 3; // 3(0000 0011)
  printf("%d\n", var << 2); // left shifting = multiplying by 2^rightOperand. 3 * 2^2 = 12;
  printf("%d\n", var);
  return (0);
}
