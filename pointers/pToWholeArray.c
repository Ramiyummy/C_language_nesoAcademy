/*
title: pointer pointing to an entire array
*/
#include <stdio.h>

int main(void)
{
  int a[5] = {1, 2, 3, 4, 5};
  int (*p)[5] = &a; // pointer to the whole array of 5 elements, we used & bcause we want a to be the address of the whole array, and not only the first element of it :)
  printf("%d", **p);
 return (0); 
}
