// Static Scoping.
//In Static scoping(lexical scoping), definition of a variable is resolved b searching its containing block
// or function. If tht fails, then searching the outer containing blokc and so on.
#include <stdio.h>
int fun1(int);
int fun2(int);
int a = 5;

int main(void)
{
  int a = 10;
  a = fun1(a); // fun1(a), control goes to fun1 function.
  printf("%d", a);
}

int fun1(int b) // fun1 takes a=10, as its b argument.
{
  b += 10; // b = 10, does b becomes 20.
  b = fun2(b); // fun2(b), control goes to fun2 function.
  return (b);
}

int fun2(int b) // fun2 takes b=20, as its b argument.
{
  int c;

  c = a + b; // since no a here, so we go to the global one, c = 5 + 20;
  return (c);
}
