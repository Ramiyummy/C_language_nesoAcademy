#include <stdio.h>
// algorithm: step1: firstNum++, and secondNum--.
//            step2: keep doing it until secondNum == 0. Bingo!
int main(void)
{
  int x, y;

  printf("Enter the two numbers you wanna add, seperated by space: \n");
  scanf("%d %d", &x, &y);
  while (y != 0)
    {
      x++;
      y--;
    }
  printf("Sum of the two numbers is: %d\n", x);
	return (0);
}
