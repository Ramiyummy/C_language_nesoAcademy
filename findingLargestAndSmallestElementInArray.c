#include <stdio.h>

void minMax(int arr[], int lenght, int *min, int *max)
{
  *min = *max = arr[0];
  int i;

  for (i=1; i<lenght; i++)
    {
      if (arr[i] > *max)
      {
        *max = arr[i];
      } 
      if (arr[i] < *min)
      {
        *min = arr[i];
      }
    }

}

int main(void)
{
  int min, max, lenght;
  int a[] = {23, 4, 21, 98, 987, 45, 32, 10, 123, 986, 50, 3, 4, 5};
  
  lenght = sizeof(a) / sizeof(a[0]);
  minMax(a, lenght, &min, &max);
  printf("Minimum value in the array is: %d and Maximum value is: %d\n", min, max);
  return (0);
}
