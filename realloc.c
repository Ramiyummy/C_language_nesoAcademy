/*
# Realloc: is used to change the size of memory block without losing the old data.
-The example bellow will allocate memory space of 2*sizeof(int).
-This function, moves the contents of the old block, to a new block and the data of the old blick is not lost.
-We may lose the data whne the new size is smaller than the old size.
-Newly allocated bytes are uninitialized.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i;
  int *ptr = (int *)malloc(2*sizeof(int));

  if (ptr == NULL)
  {
    printf("Memory is in your dreams");
    exit(1);
  }

  printf("Enter the two numbers: \n");
  for(i=0; i<2; i++)
    {
      scanf("%d", ptr + i);
    }

  //Memory allocation for 2 more integers:
  ptr = (int *)realloc(ptr, 4*sizeof(int));
  if (ptr == NULL)
  {
    printf("Again, memory is in your dreams");
    exit(1);
  }

  printf("Enter 2 more integers: \n");
  for (i=2; i <4; i++)
    {
      scanf("%d", ptr + i);
    }

  //Printing the values on the screen
  for(i=0; i<4; i++)
    {
      printf("%d ", *(ptr + i));
    }
  return (0);
}
