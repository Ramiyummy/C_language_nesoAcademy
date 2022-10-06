#include <stdio.h>

int main(void)
{
  char name[] = "Rami";
  printf("%p\n", name ); //1
  printf("%p\n", &name); //2
  printf("%p\n", name[0]);//3
  printf("%p\n", &name[0]);//4
  return (0);
}
