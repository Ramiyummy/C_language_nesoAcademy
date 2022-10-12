/*
-title: declaring Structure Variables.
*/
#include <stdio.h>

struct
{
  char *name;
  char *quote;
  int age;
} person;

int main(void)
{
  person.name = "Rami";
  person.quote = "Mind Your Own Business";
  person.age = 19;
  
  printf("this dude's name is %s, %d years old. Lives by "%s.");
  return (0); 
}
