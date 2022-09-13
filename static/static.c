#include <stdio.h>

int main(void)
{
  int value;
  value = increment();
  value = increment();
  value = increment();

  printf("%d\n", value);
  return (0);
}
