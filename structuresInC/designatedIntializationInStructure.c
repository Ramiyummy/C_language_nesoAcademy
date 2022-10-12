/*
-title: designated intialization in structure
-Designated initialization allows structure members to be initialized in any order.
*/
#include <stdio.h>
struct abc
  {
    int x;
    int y;
    int z;
  };

int main(void)
{
  struct abc a = {.y = 20, .z = 30, .x = 10};
  printf("%d %d %d", a.x, a.y, a.z);
  return (0);
}
