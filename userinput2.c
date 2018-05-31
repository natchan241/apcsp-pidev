#include <stdio.h>


// Finds the area of a circle from 3.5 to 12.5

float areaOfCircle(float a)
{
  return 3.14*a*a;
}

int getUserNum()
{
  int num;
  char input[256];
  printf("Enter in a number, press enter\n");
  while (1)
  {
    fgets(input, 256, stdin);
    if (sscanf(input, "%d", &num) == 1) break;
    printf("Not a valid integer - try again!\n");
  }
  return num;
}

int main(int argc, char* argv[])
{
  printf("Finding the area of the circle\n");

  char input[256];
  int radius;
  int radius2;
  
  if(argc == 3)
  {
    int arg1;

    int found = sscanf(argv[1], "%d", &arg1);
    if (found != 1)
    {
      printf("First arg is not an integer, enter two integers\n");
      printf("%d", arg1);
      return 1;
    }

    int arg2;
    found = sscanf(argv[2], "%d", &arg2);
    if (found != 1)
    {
      printf("Second arg is not an integer, enter two intergers\n");
      return 1;
    }

    printf("%d and %d are your inputed radii.\n", arg1, arg2);

    float r;

    for (int i = arg1; i <= arg2; i++)
    {
      r = areaOfCircle(i);
      printf("Radius = %d, and Area = %f\n", i, r);
    }
    
  }
  else
  {
    int radius = getUserNum();
    int radius2 = getUserNum();
    
    float r;

    for (int i = radius; i <= radius2; i++)
    {
      r = areaOfCircle(i);
      printf("Radius = %d, and Area = %f\n", i, r);
    }
  }
}
