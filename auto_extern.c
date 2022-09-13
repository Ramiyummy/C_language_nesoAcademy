#include <stdio.h>
//global vars by defualt are intialized to 0.
int age;

int main(void)
{
  //Scope − auto variables are local variables to the function block. Default value − Garbage value is the default initialized value.
  auto int i;
  int j;

  printf("%d\n", age);
  return (0);
}
