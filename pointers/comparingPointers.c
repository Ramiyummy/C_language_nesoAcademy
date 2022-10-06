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

  //homework program:

  int aa[] = {5, 16, 7, 89, 45, 32, 23, 10};

  int *pp = &aa[1], *qq = &aa[5];

  printf("%d ", *(pp+3)); //  its points on 16, and we moved 3 step forwards, thus 45  
  printf("%d ", *(qq-3)); //  7
  printf("%d ", qq - pp); // the difference between the two is 4. 6 - 2 =4, or 5 -1 =4. same thing 
  printf("%d ", pp < qq); // pp is in fact before qq, thus the output is: 1 
  printf("%d ", *pp< *qq);// 16<32 is true, thus 1
  // output: 45 7 4 1 1 
  return (0);
}
