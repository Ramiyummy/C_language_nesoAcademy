/*
-Title: Designing a calculator program using function pointers.
-There are some situations in which user has to decide which function has to be called at a particular point in time.
- We can use functin pointers to call a particular function at run time.
*/
#include <stdio.h>
#define ops 4
float sum(float a, float b) { return (a+b);}
float sub(float a, float b) { return (a-b);}
float mult(float a, float b) { return (a*b);}
float divi(float a, float b) { return (a/b);}

int main(void)
{
  float (*ptr2fun[ops])(float, float) = {sum, sub, mult, divi}; // array of pointer, which are pointers to functions.
  int choice;
  float a, b;

  printf("Enter your choice: 0 for sum, 1 for subtraction, 2 for multiplication, and 3 for division:\n");
  scanf("%d", &choice);

  printf("Enter the two number:\n");
  scanf("%f %f", &a, &b);

  printf("%f", ptr2fun[choice](a, b));
  return (0);
}
