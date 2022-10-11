#include <stdio.h>
#include <string.h>

int main(void)
{
  char p[20];
  char *s = "string"; //address of the 1st element(s) is stroed in s.
  int lenght = strlen(s);
  int i;
  for (i=0; i < lenght; i++)
    {
      p[i] = s[lenght - i]; // first character get assigned to p[0] is '\0'
    }
  printf("%s", p);// printf will print everything before '\0' and will not see anything after it.
  return (0);
}
