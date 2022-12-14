/*
-title: Structure Types (using structure tags)
-A Structure tag is used to identify a particular kind of structure
*/
#include <stdio.h>

struct employee //This is a Structure Tag
{
  char *name;
  int age;
  int salary;
};

int manager()
{
  struct employee manager;
  
  manager.age = 27;
  
  if (manager.age >30)
  {
    manager.salary = 65000; 
  }
  else
  {
    manager.salary = 55000; 
  }
  return (manager.salary);
}

int main(void)
{
  struct employee emp1;
  struct employee emp2;
  printf("Enter the salary of employee1: ");
  scanf("%d", &emp1.salary);
  printf("Enter the salary of employee2: ");
  scanf("%d", &emp2.salary);
  
  printf("employee 1 salary is %d\n", emp1.salary);
  printf("employee 1 salary is %d\n", emp2.salary);
  printf("manager salary is %d", manager());
  return (0);  
}
