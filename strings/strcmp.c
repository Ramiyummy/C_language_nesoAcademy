/*
-Prototype: int strcmp(const char* s1, const char* s2)
-Purpose: compares two strings s1 and s2.
-Returns Value: 1: Less than 0, if s1<s2. 2: Greater than 0, if s1>s2. 3: Equal to 0, if s1==s2.
-All uppercase letters < lowercase letters. Uppercase:65-90, Lowercase:97-122.
-Digits < letters. Digits:0-9, (ascii: 48-57).
-Spaces are less than all printing chars(ascii of 32).
-strcmp: considers s1<s2 if either one of the following conditions is satisfied:
1: When the 1st i characters in s1 and s2 are same and (i+1)st character of s1 is less than that of s2
2: All characters of s1 match s2, but s1 is shorter than s2. 
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
  //example01:
  char *s1 = "abcd"; // s1= "bace", s2= "abce". Result is s1>s2 because  b > a.
  char *s2 = "abce";

  if (strcmp(s1, s2) < 0)
  {
    printf("s1 is less than s2");
  }
  else 
  {
    printf("s1 is greater than or equal to s2");
  }
  return (0);
}
