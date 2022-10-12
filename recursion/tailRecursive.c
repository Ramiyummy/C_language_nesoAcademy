// A recursive function is said to be Tail Recursive if the recursive call is the last thing done by the function.
//There's no need to keep the record for the previous state.
#include <stdio.h>

void fun(int n)
{
  if (n == 0)
  {
  return;
  }
  else
  {
    printf("%d ", n);
  }
  return fun(n-1); //Last thing done by the function. Also fks the the stack properites, lol hhhhh. 
}
int main(void)
{
  fun(3);
  return (0);
}
