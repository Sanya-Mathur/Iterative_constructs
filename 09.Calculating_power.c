#include <stdio.h>
void main() 
{  printf("RA2211042010042\n");
  int base, power;
  int result;
  int i;
 result=1;
  
  printf("Enter base and power values: ");
  scanf("%d%d",&base, &power);
 for(i = 1; i <= power; i++)
  {
    result = result * base;
  }
  
  printf("\n%d^%d = %d",base, power, result);
}
