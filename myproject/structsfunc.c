#include "structsfunc.h"

#include <stdio.h>

void printStudentByPtr(struct Student* Student)
{
  printf("Student Info:\n");
  printf("  First Name: %s\n", Student->firstName);
  printf("  Last Name: %s\n", Student->lastName);
  printf("  Age: %d\n", Student->age);
  printf("  Student ID: %d\n", Student->studentid);

  // could do it this way, but -> is easier
  //printf("  Student ID:%d\n", (*Student).studentid);
}
