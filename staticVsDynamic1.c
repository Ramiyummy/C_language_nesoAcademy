#include <stdio.h>
/* Properties of Stack
Stack is a container (or memory segment) which holds some data.
Data is retrieved in Last In First Out (LIFO) fashion.
There are two operations which can be performed on stack. Push operation helps to place an element in the stack, while the other one called pop helps to retrieve an element from the stack.*/
//Activation R60ecord is a portion of the stack, which is composed of:
// 1. locals of the callee.
// 2. address of the caller.
// 3. parameters of the callee
int main(void)
{
  int a = 10;
  a = fun1(a);
  printf("%d", a);
  return (0);
}

int fun1(int a)
{
  int b = 5;
  b += a;
  return (b);
} 
