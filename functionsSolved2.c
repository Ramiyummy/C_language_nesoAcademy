#include <stdio.h>

//It's better to focus on the pointers variables, because they're the one who could changes the actual values.
void f1(int, int);
void f2(int*, int*);
int main(void)
{
  int a =4, b = 5, c = 6;

  f1(a, b);
  f2(&b, &c);

  printf("%d", c-a-b);
  return (0);
}

void f1(int a, int b)
{
  int c;
  c = a; a = b; b =c;
}

void f2(int *a, int *b)
{
  int c;
  c = *a; *a = *b; *b =c;
}
