#include <stdio.h>

int fun (int j)
{
  static int i = 50;
  int k;
  if(i == j)
  {
    printf("something");
    k = fun(i);
    return (0);
  }
else 
  return (0);
}
int main(void)
{
  fun(50);
  return (0);
}
