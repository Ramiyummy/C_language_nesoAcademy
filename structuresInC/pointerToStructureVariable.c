/*
-title: Accessing members of structure using structure pointer.
*/
#include <stdio.h>
struct abc
  {
    int x;
    int y;
  };

int main(void)
{
  struct abc a = {0, 1};
  struct abc *ptr = &a; // ptr is a pointer to some variable of type struct abc

  printf("%d %d", ptr ->x, ptr ->y); // ptr ->x is equivalent to (*ptr).x == (*&a).x == a.x.
  return (0);
}
