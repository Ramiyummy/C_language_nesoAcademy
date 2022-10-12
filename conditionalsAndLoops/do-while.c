#include <stdio.h>

int main(void)
{
  int n;

  do {
    printf("Enter an integer!\n>");
    scanf("%d", &n);
  } while( n != 0);
  printf("You are out of the loop\n");
  return (0);
}
