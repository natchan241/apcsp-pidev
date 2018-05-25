#include <stdio.h>


void simpleFunc()
{
  printf("simpleFunc\n");
}


// Finds the area of a circle from 3.5 to 12.5

float areaOfCircle(float a)
{
  float c;
  c = 3.14*a*a;

  return c;
}

int main()
{
  printf("Finding the area of the circle\n");

  float r;
  
  for(float i = 3.5; i <= 12.5; i++)
    {
      r = areaOfCircle(i);
      printf("Radius = %f, and Area = %f\n", i, r);
    }
}
