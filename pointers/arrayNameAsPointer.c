/*
Fact: name of an array can be used as a pointer to the First Element of an array. However, we can't assign
a new address to them.
*/
#include <stdio.h>

int main(void)
{
  int sum = 0, *p;
  int a[5]; //a points to the first element, thus a[0]
  *a = 10; // here, we assign the a[0] to 10, because its a pointer.
  printf("%d ", a[0]);
  
  // some pointer arithmeic

  *(a+1) = 20;
  *(a+2) = 30;
  *(a+3) = 40;
  *(a+4) = 50;
  printf("%d %d %d %d", a[1], a[2], a[3], a[4]);

  // sum of array elements

  for (p=a; p<=a+4; p++)
    {
     sum += *p; 
    }
  printf("\nSum of array elements is: %d", sum);

  //printf("%p", a++); // we can't assign new address to the base address of the array a.

  // we can use a pointer that can be a representive of the array, and whatever arithmetic

  int *q = a;
  printf("\n%d", *(++q)); // this should print 20 to the screen
  return (0);
}
