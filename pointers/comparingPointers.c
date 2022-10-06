//Whenever we do comparison the output is either 1 or 0.
#include <stdio.h>

int main(void)
{
  int a[] = {1, 2, 3, 4, 5, 6};
  
  int *p = &a[3];
  int *q = &a[5];

  printf("%d\n", p<=q); // p is before q, thus the ouput is: 1
  printf("%d\n", p>=q); // before is not after q, thus the output is: 0

  q = &a[3];
  
  printf("%d\n", p==q);
  return (0);
}
