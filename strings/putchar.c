/*
putchar: accepts an integer argument(which represents a character it wants to display) and returns an integer
representing the character written on the screen.
*/
#include <stdio.h>

int main(void)
{
  int ch;
  
  for (ch = 'A'; ch <= 'Z'; ch++)
  {
    putchar(ch); 
  }
  return (0);
}
