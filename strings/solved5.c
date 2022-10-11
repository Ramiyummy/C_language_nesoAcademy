#include <stdio.h>
//Make sure to brin a pen and paper to start represeting the process and tracks of thi stuff hhh

void fun1(char *s1, char *s2)
{
  char *tmp;
  tmp = s1;
  s1 = s2;
  s2 = tmp;
}

void fun2(char **s1, char **s2)
{
  char *tmp;
  tmp = *s1;
  *s1 = *s2;
  *s2 = tmp;
}

int main(void)
{
  char *str1 = "Hi", *str2 = "Bye";
  fun1(str1, str2);   printf("%s %s", str1, str2);
  fun2(&str1, &str2); printf("%s %s", str1, str2);
  return (0);
}
