#include <stdio.h>
//hint: 435 in binary is: 110110011.Thus, you just need to count how many times u need to shift to stay only with 0s
int func(int);
int main(void)
{
  int num = 435;
  printf("%d\n", func(num));
  return (0);
}

int func(int num)
{
  int count = 0;
  while (num) // 9 times to reach 0.
    {
      count++;
      num >>= 1;
    }
  return (count);
}
