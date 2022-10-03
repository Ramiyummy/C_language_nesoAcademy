/*
 1. Divide the problem into smaller sub-problems.
 2. Specify the base condition to stop recursion.
 */

#include <stdio.h>
/* Logical method:
Calculate fact(4)
fact(1) = 1
fact(2) = 2 * 1
fact(3) = 3 * 2 * 1 = 3 * fact(2)
fact(4) = 4 * 3 * 2 * 1 = 4 * fact(3)
>>Thus: fact(n) = n * fuct(n - 1)
*/
int fact(int n)
{
  if(n == 1) //Base Case: Base condition is the one which doesn't require to cal the same functin again and it helps in stopping the recursion.
  {
    return (1); 
  }
  else //Recursive proedure
  {
    return (n * fact(n - 1));
  }
}
int main(void)
{
  int n = 4;
  printf("%d", fact(5));
  return (0);
}
