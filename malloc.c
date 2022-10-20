/*
# Malloc: is a built-in function declared in <stdlib.h>.
-malloc is the short for "memory allocation" and is used to dynamically allocate a single large block of contiguous
memory according to the size specified, and on success is returns "a pointer" pointing to the first byte of the 
allocated memory use returs NULL.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  // malloc allocates 4 byts in the heap, and the address of the 1st byte is stroed in the pointer ptr.
  //int *ptr = (int *)malloc(sizeof(int));

  //Example program:
  int i, n;
  
  printf("Enter the number of integers you want: ");
  scanf("%d", &n);
  int *ptr = (int *)malloc(n*sizeof(int));

  if (ptr == NULL)
  {
    printf("Memory not available.");
    exit(1);
  }
  for (i=0; i<n; i++)
  {
      printf("Enter an integer: ");
      scanf("%d", ptr + i);
  }
  for (i=0; i<n; i++)
    {
      printf("%d ", *(ptr + i));
    }
  return (0);
}
