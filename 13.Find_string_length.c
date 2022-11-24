#include <stdio.h>
main() 
{printf("RA2211042010042\n");
  int i, len = 0;
  char  s[20];
  printf("Enter the string: ");
  gets(s);
  for(i = 0; s[i] != '\0'; i++)
  {
    len++;
  }
  printf("Length of the string is %d", len);
}



