#include<stdio.h>

int main()
{
  int a = 545;
  char b = 'c';
  float c = 10.5;
  double d = 8.98432;
  
  // print value and size of an int variable
  printf("The int variable has a value of %d and a size of %d bytes.\n", a, sizeof(a));

  // print value and size of a char variable
  printf("The char variable has a value of %c and a size of %d bytes.\n", b, sizeof(b));

  //print value and size of a float variable
  printf("The float variable has a value of %f and a size of %d bytes.\n", c, sizeof(c));

  //print value and size of a double variable
  printf("The double variable has a value of %f and a size of %d bytes.\n", d, sizeof(d));
}
