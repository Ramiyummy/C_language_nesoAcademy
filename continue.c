// program that prints all odd numbers from 1 to 20.

#include <stdio.h>

int main(void)
{
  int i, n = 2;

  for (i = 1; i <= 20; i++)
    {
      if (i == n)
      {
        n+=2;
        continue;
      }
      printf("%d ", i);
    }
  return (0);
}
