/*
-title: Initializing and Accessing the Structure Members.
*/
#include <stdio.h>
struct person
{
    char name[50];
    int age;
    char hey[20];
};
int main(void)
{
  struct person one = {"Rami", 19, "hey"};
  struct person two = {"Bayoumi", 19, "hey"};
  // we can access members of the structure using dot (.) operator.
  printf("%s %s %s", one.hey, one.name, two.name);
  return (0);
}
