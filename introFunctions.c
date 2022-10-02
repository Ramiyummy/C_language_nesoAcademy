#include <stdio.h>

int areaOfRect(int lenght, int breadth)
{
  int area;

  area = lenght * breadth;
  return (area);
}

int main(void)
{
  int l, b, area;

  l = 10, b = 5;

  area = areaOfRect(l, b);
  printf("The area is: %d\n", area);
  return (0);
}
