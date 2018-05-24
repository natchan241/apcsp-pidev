#include <stdio.h>

int main()
{
  int a = 0;
  int b = 1;

  // if statement to test is a is equal to 0
  if (a == 0)
  {
    printf("a is 0\n");
  }
  else
  {
    printf("a is not 0\n");
  }

  if (a != 0)
  {
      printf("a is not 0\n");
  }
  else
  {
    printf("a is 0\n");
  }

  if (a > b)
  {
    printf("a is greater than b\n");
  }
  else
  {
    printf("a is not greater than b\n");
  }

  if (a >= b)
  {
    printf("a is greater than or equal to b\n");
  }
  else
  {
    printf("a is not greater than or equal to b\n");
  }

  if (a == b)
  {
    printf("a is equal to b\n");
  }
  else
  {
    printf("a is not equal to b\n");
  }

  if (a == 0 && b == 0)
  {
    printf("a is equal to 0 and b is equal to 0\n");
  }
  else
  {
    printf("Either a or b doesn't equal 0\n");
  }

  if (a == 0 || b == 0)
  {
    printf("Either a or b is equal to 0\n");
  }
  else
  {
    printf("Both a and b don't equal to 0\n");
  }

  if (!(a == 0))
  {
    printf("a is not equal to 0\n");
  }
  else
  {
    printf("a is equal to 0\n");
  }
  
}
