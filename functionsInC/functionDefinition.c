/*
-title: Function definition.
-Function Definition: consists of block of code which is capable of performing some specific task.
-Parameter: is a variable in the declaration and definition of the function.
-Argument: is the actual value of the parameter that gets passed to the fucntion.
*/
#include <stdio.h>

int num(); // prototype, no need to add the paramters, even if they do exist here.

int main(void)
{
  printf("%d\n", num());
  return (0);
}

int num()
{
  int num;

  num = 8;
  return (num);
}
