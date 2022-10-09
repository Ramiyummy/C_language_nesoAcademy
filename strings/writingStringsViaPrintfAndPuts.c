#include <stdio.h>

int main(void)
{
  char name[] = "Rami";
  char hey[] = "Hey";
  char *ptr = "Hello World";
  //printf:
  printf("%s\n", ptr);
  printf("%.5s\n", ptr); // prints the first 5 characters of the string.
  printf("%6.5s\n", ptr); // it starts from 0, thus the left, and prints up to 6 char.

  //puts:
  puts(name);
  puts(hey);

  return (0);
}
