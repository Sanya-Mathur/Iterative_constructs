#include <stdio.h>
void main() 
{printf("RA2211042010042\n");
  int number,factorial,i;
  printf("Enter any number:");
  scanf("%d",&number);
 
for(i=1;i<=number;i++)
{
  factorial=factorial*i;
  printf("%d",i);
}
     printf("Factorial of %d is %d", number,factorial);
}
