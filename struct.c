#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct User {
  int id;
  int age;
  char name[100];
  char sex[100];
};

struct User* createUser(int id, int age, char* name, char* sex) {
  struct User* user = malloc(sizeof(struct User));
  user->id = id;
  user->age = age;
  strcpy(user->name, name);
  strcpy(user->sex, sex);
  return user;
}

void printUser(struct User* user) {
  printf("ID: %d\n", user->id);
  printf("Age: %d\n", user->age);
  printf("Name: %s\n", user->name);
  printf("Sex: %s\n", user->sex);
}

int main() {
  struct User* john = createUser(1, 25, "John Doe", "Male");
  struct User* maria = createUser(1, 25, "Maria Doe", "Male");
  printUser(john);
  printUser(maria);
  return 0;
}
