#include <stdio.h>

int fun()
{
  static int num = 16;
  return num--; // returns 16, then num becomes = 15.
}

int main(void)
{
  for (fun(); fun(); fun())
    {
      printf("%d ", fun());
    }
  return (0);
}
