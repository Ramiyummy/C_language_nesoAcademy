#include <stdio.h>
// &:bitwise AND, |: bitwise OR, ~:bitwise NOT, <<: bitwise Left shift, >>:bitwise Right shift, ^:bitwise XOR

int main(void)
{
  char x = 1, y = 2; // x = 1(0000 0001), y = 2(0000 0010)
  if (x&y)                              // 1&2 = 0()
  {
    printf("Result of x&y is 1\n");
  }
  if (x&&y)   // x&&y
  {
    printf("Result of x&&y is 1\n");
  }
  return (0);
}
