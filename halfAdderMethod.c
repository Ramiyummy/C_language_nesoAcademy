#include <stdio.h>
// example: 5 > 0101
//          10> 1010
//     sum: 15> 1111
int main(void)
{
  int a, b, sum, carry;

  while (b != 0)
    {
      sum = a ^ b; // xor gives us the sum of the bits;
      carry = (a&b) << 1;
      a = sum;
      b = carry;
    }
  return (0);
}

// To be continued hhhh
