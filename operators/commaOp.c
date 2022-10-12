//i: ',' operator returns the rightmost operand in the exp
// and it simply evaluates the rest of the operands and finally reject them.
//ii: ',' has least precedence among all other operators in C language.
#include <stdio.h>

int main(void)
{
  int a = (3, 9, 8);
  printf("%d\n", a);

  ///////////////////////////

  int var = (printf("%s\n", "Rami!"), 5);
  printf("%d\n", var);

  ///////////////////////////
  
  int num, var1;
  
  num = (var1 = 15, var1+35); // var1 = 15 will get evaluated first, thus var1+35 == 15+35 == 50, thus second operand (50)
  printf("%d\n", num);
  return (0);
}
