
#include<stdio.h>
#include<math.h>
main()
{
printf("RA2211042010042\n");
 int i,j,num,sum=0;
 printf("Enter number\n");
 scanf("%d",&num);
   while(num>0)
  {
    j=num%10;
    sum+=(j*j);
    num=num/10; 
  }
  num=sum;
  }
  
  if(sum==1)
 printf("Happy Number\n");
 else
 printf("UnHappy Number\n");
}
