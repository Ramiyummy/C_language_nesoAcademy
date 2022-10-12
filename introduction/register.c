///Memory heirachy:  1. rigistern memroy, 2. cache memroy, 3. main memory, 4. magnetic disks, 5. magnetic tapes.

#include <stdio.h>

int main (void)
{
  register int var; // easy and faster to access.
  
  var = 9;
  printf("%d\n", var);
  return (0);
}
