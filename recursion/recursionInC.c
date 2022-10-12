// Recursion is a process which a function calls itself directly or indireclty.
#include <stdio.h>

int fun(int n)
{
  if (n == 1)
  {
    return (1);
  }
  else 
  {
    return (1 + fun(n-1));
  }
}
int main(void)
{
  int n = 3;
  printf("%d", fun(n));
  return (0);
}

// try to represent the process in the stack, in order to get the process.
//exmaple:  fun(3) > return 1 + fun(2) > return 1 + fun(1) > return 1.
