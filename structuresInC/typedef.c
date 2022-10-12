/*
title: Structure Types (Using typedef)
-Syntax: typedef existing_data_type new_date_type
-typedef: gives freedom to the user by allowing them to create their own types.
*/
#include <stdio.h>
typedef int INTEGER;
typedef struct person // typedef replaced the old type "struct person", with the new type "person"
{
    char *name;
    int age;
    char *quote;
} person; // new data type "person"

int main(void)
{
  INTEGER var = 100;
  printf("%d\n", var);
  person client;
  client.name = "Rami";
  client.age = 19;
  client.quote = "Mind Your Own Business";
  
  printf("Client's name is %s, he is %d yeard old. Lives on the quote %s", client.name, client.age, client.quote);
  return (0);
}
