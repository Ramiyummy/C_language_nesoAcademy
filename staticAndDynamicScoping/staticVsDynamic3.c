//In Dynamic Scoping, difinition of a variable is resolved by searching its contianing block
// and if not found, then searching its calling function and if still not found then the fucntion 
//which called that calling function will be searched and so on.
#include <stdio.h>
int a, b; // global vars. thus, a=3, b=1.

void print()
{
  printf("%d %d",a, b); // a = 3 b =1.
}

int fun1()
{
  int a, c;
  a = 0; b = 1; c = 2;
  return (c); // returns 2.
}

void fun2()
{
  int b;
  a = 3; b = 4; //  
  print();
}
int main(void)
{
  a = fun1(); // a = fun1(). a becomes a = 2.
  fun2(); // lool, i'm doing the compiler job hhhh. 3 1
}
