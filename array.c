#include <stdio.h>

void arrayAdd(int s, int (*Array)[s], int n)
{
  for (int i = 0; i < 100; i++)
    {
      (*Array)[i] = (*Array)[i] + n;
    }
}

int main()
{
  // create an int array 100 long
  int arr[100];
  int (*Array)[100] = &arr;
  
  for (int i = 0; i < 100; i++)
  {
    arr[i] = i * i;
  }

  arrayAdd(100, Array, 5);
  
  for (int i = 0; i < 100; i++)
    {
      printf("The values of the array are: %d\n", arr[i]);
    }
}
