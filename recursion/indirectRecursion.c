/*
#Types Of Recrsion.
1. Direct recursion
2. Indirect recursion.
3. Tail recursion
4. Non-tail recursion
*/
#include <stdio.h>

void odd();
void even();
int n = 1;
int main(void)
{
  odd();
  return (0);
}

void odd()
{
  if(n <= 10)
  {
    printf("%d", n+1);
    n++;
    even();
  }
  return;
}

void even()
{
  if (n <= 10)
  {
    printf("%d", n-1);
    n++;
    odd();
  }
  return;
}
