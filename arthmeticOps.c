#include <stdio.h>
int div(int one, int two);
int mod(int one, int two);
int main(void)
{
  int one, two, result;

  printf("Welcome to the divMod calculator:\n"     );
  printf("Enter the first number:\n");
  scanf("%d", &one);
  printf("Enter the second number\n");
  scanf("%d", &two);

  printf("Congrats!\n Here are your results:\n Division:  %d. Modulus: %d", div(one, two), mod(one, two) );
}

int div(int one, int two)
{
  int result;

  result = one / two;
  return (result);
}

int mod(int one, int two)
{
  int result;

  result = one % two;
  return (result);
}
