#include <stdio.h>
// conditional op= ?:, its a ternary op
int main(void)
{
  int marks;
  char result;
  int var = 75, var2 = 56;
  int num;

  num = sizeof(var) ? (var2 > 23 ? ((var == 75) ? 'A' : 0) : 0) : 0; /// 'A' = 65
        //1 exp//////  /// 2 exp//////////////////////////////   //3 exp//
  marks = 120;
  result = (marks > 100) ? 'A': 'B'; 

  //printf("You got %c\n", result);
  printf("%d\n", num);
  return (0);
}
