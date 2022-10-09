#include <stdio.h>

int main(void)
{
  //scanf:
  char b[100];
  char a[100];
  printf("Enter a small string:\n");
  scanf("%s", a);
  printf("%s\n", a);
 //gets:
  printf("Enter another string, we'll print it all this time :) :\n");
  fgets(b, 100, stdout);
  printf("Here's your string hhhh:\n%s", b);
  return (0);
}
