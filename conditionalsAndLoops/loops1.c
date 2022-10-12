#include <stdio.h>

int main(void)
{
  int i = 1024; //100 0000 0000 then, 010 0000 00000, then, 001 0000 0000, then, 000 1000 0000 ...etc 11th times.
  for (; i; i >>= 1)
    printf("Hey there!\n");
  return (0);
}
