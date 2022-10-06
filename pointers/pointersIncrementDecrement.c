#include <stdio.h>

int main(void)
{
  // pre and post decrement
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
  int *p = &arr[0];

  //printf("%d\n", *(p++));
  //printf("%d\n", *p);

  // pre and post increment

  int rra[] = {1, 2, 3, 4, 5, 6, 7, 8};
  int *q = &rra[2];

  printf("%d\n", *(--q));
  printf("%d\n", *(q--));
  printf("%d\n", *q);
  return (0);
}
