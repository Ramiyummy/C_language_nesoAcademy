#include <stdio.h>

int main(void)
{
  char var = 3;  // 3(0000 0011)
  printf("%d\n", var >> 1); // right shifting = dividing by 2^rightOperand. 3 / 2^1
  return (0);
}
