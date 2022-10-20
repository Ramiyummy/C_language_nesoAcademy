/*
-Wild pointers: is also knowns as uninitialized pointers.
-These pointers usually point to some arbitary memory location and may cause a program to crash or misbehave.
-How to avoid Wild Pointer:
-1: intialize them with the address of a known pointer.
-2: we should explicitly allocate the memory and put the values in the allocated memory.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int *p;
  *p = 10;
  return (0);
}
