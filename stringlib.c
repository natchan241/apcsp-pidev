#include <stdio.h>
#include <string.h>



int main()
{

  char str1[27];
  char c = 'a';

  for (int i = 0; i < 26; i++)
    {
      str1[i] = c;
      c++;
    }

  str1[26] = '\0';
  
  char str2[] = "abcdefghijklmnopqrstuvwxyz";
  char str3[53] = "";

  if (strcmp(str1, str2) == 0)
    {
      printf("The strings are identical.\n");
    }
  else
    {
      printf("The strings are different.\n");
    }
  
  for (int i = 0; i < 26; i++)
    {
      str1[i] = str1[i] - 32;
    }

  if (strcmp(str1, str2) == 0)
    {
    printf("The strings are identical.\n");
    }
  else
    {
    printf("The strings are different.\n");
    }

  strcpy(str3, str1);
  strcat(str3, str2);

  printf("%s\n", str1);
  printf("%s\n", str2);
  printf("%s\n", str3);
  
}

