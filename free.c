/*
# Free: is used to release the dynamically allocated memory in heap.
-The memory in heap will not be released automatically after using the memory. The space remains there and cant be used.
-Its our responsibility to release the memory allocated.
*/
#include <stdio.h>
#include <stdlib.h>

int *input()
{
  int *ptr, i;
  ptr = (int *)malloc(5*sizeof(int));

  printf("Enter 5 numbers: ");
  for (i=0; i<5; i++)
    {
      scanf("%d", ptr+i);
    }
  return (ptr);
}
int main(void)
{
  int i, sum = 0;
  int *ptr = input();
  for (i=0; i<5; i++)
    {
      sum += *(ptr + i);
    }
  printf("Sum is: %d", sum);
  free(ptr);
  ptr = NULL;
  return (0);
}
