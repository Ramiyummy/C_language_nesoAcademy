#include <stdio.h>
#define Year 2022
#define minus(x, y) x-y //We can use macros like function. first expenstion then evaluation.
int main(void)
{
  int birthdayYear;
  printf("What's your birthday Year?\n", birthdayYear);
  scanf("%d", &birthdayYear);
  printf(" You age is %d\n", minus(Year, birthdayYear) );
  ///// predefined macros "Date" and "Time":
  printf("Date is: %s.\n Time is: %s\n", __DATE__, __TIME__);
  return (0);
}
