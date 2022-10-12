//A recursive function is said to be Non-tail Recursive if the recursive call is not the last thing done by the function.
//After returning back, there is something left need to be evaluated.
#include <stdio.h>

void fun(int n)
{
  if (n == 0)
  {
    return;
  }
  fun(n-1);
  printf("%d ", n); //something left to evaluate.
}

int main(void)
{
  fun(3);
  return (0);
}
