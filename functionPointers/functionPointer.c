/*
-Function pointers are like normal pointers but they have the capability to point to a function.
-
*/
#include <stdio.h>

int add(int a, int b)
{
  return a+b;
}

int main(void)
{
  //int *ptr[10]; // ptr is an array of 10 integer pointers.
  //int (*ptr)[10]; // ptr is a pointer to an array of 10 integers.

  //declaring a pointer to a function:
  int (*ptr)(int, int); // ptr is a pointer to a to a function containing 2 int argument and an int return value.

  //assigning the address of a function to a function pointer:
  ptr= add; //int (*ptr)(int, int) = &add;

  //using the function pointer:
  int result;
  result = ptr(10, 20);
  printf("%d\n", result);

  

  return (0);
}
