/*
-Dangling Pointer: is a pointer that points to some non-existing memory location
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  int *ptr = (int *)malloc(sizeof(int));
  // code
  // code
  // code
  free(ptr); // now ptr is pointing to the deallocated memory(not existed anymore), thus its a danling pointer.

  return (0);
}
