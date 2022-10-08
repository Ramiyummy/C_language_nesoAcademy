/*
What is the ouput of the following c code? assume that the address of x is 2000, and sizeo(int) = 4;
*/
#include <stdio.h>

int main(void)
{
  unsigned int x[4][3] = {{1, 2, 3}, {4, 5, 6}
                          {7, 8, 9}, {10, 11, 12}};
                          
   printf("%u %u %u", x+3, *(x+3), *(x+2)+3); 
   // answer is: 2036, 2036, 2036 you can do the figuring out ourself, right? : )
}
