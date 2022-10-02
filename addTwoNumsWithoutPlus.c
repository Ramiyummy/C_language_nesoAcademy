#include <stdio.h>

int main(void)
{
  int x, y;
  printf("Enter the two numbers you want to add, seperated by space: \n");
  scanf("%d %d", &x, &y);

  if (y > 0)
  {
    while (y != 0)
      {
        x++;
        y--;
      }
  }
  else if (y < 0)
  {
    while (y != 0)
      {
        x--;
        y++;
      }
  }
  printf("The sum of the two numbers is %d\n", x);
  return (0);
}
