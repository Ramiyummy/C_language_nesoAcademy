// program that allows the user an integer till he/she enters a zero or a negative number.

#include <stdio.h>

int main(void)
{
  int n;

  printf("Enter a number\n");
  scanf("%d", &n);
  
  while (n != 0)
    {
      if (n < 0)
      {
        break;
      }
      printf("Enter a number\n");
      scanf("%d", &n);
    }
  return (0);
}
