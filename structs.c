#include <stdio.h>
#include <string.h>

struct Student {
  char firstName[50];
  char lastName[50];
  int age;
  int studentid;
};

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

int main()
{
  char input[256];
  char answer;
  int studentnum = 0;
  struct Student student[10];

  printf("Would you like to enter a student's info? y/n\n");

    while (1)
    {
      fgets(input, 256, stdin);
      if (sscanf(input, "%c", &answer) == 1) break;
      printf("Not a valid answer - try again!\n");

    }

    if(answer == 'n')
    {
      printf("Ok, maybe next time.\n");
      return 1;
    }

    while (answer == 'y')
    {
      for (int i = 0; i <= 10; i++)
      {
	printf("Student First Name:\n");
	fgets(input, 256, stdin);
	sscanf(input, "%s", student[i].firstName);

	printf("Student Last Name:\n");
	fgets(input, 256, stdin);
	sscanf(input, "%s", student[i].lastName);

	printf("Student Age:\n");
	fgets(input, 256, stdin);
	sscanf(input, "%d", &student[i].age);

	printf("Student ID:\n");
	fgets(input, 256, stdin);
	sscanf(input, "%d", &student[i].studentid);

	studentnum++;

	printf("Would you like to enter another student's info? (y/n)\n");
	
	while (1)
	{
	  fgets(input, 256, stdin);
	  if (sscanf(input, "%c", &answer) == 1) break;
	  printf("Not a valid answer - try again!\n");
	}
    
	if(answer == 'n')
	{
	  for (int i = 0; i < studentnum; i++)
	  {
	    // pass by ref - generally preferred as we don't make a copy
	    printStudentByPtr(&student[i]);
	    return 1;
	  }
	}
      }
    }
    
}
