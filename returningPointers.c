//Find the mid of the array

#include <stdio.h>
int *findMid(int a[], int n);

int main(void)
{
  int arr[] = {1, 2, 3, 4, 5};
  int lenght = sizeof(arr)/sizeof(arr[0]);
  int *mid = findMid(arr, lenght);

  printf("%d\n", *mid);

  return (0);
}

int *findMid(int a[], int n) // returning the address of an integer.
{
  return &a[n/2];
}
