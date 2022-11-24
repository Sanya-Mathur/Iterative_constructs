#include <stdio.h>  
   
int main()  
{  
   printf("RA2211042010042\n");
    int num ;  
    int rem = 0, sum = 0,n;  
      printf("Enter number\n");
 scanf("%d",&num); 
 
    n = num; 
    while(num > 0)
    {  
        rem = num%10;  
        sum = sum + rem;  
        num = num/10;  
    }  
      
  
    if(n%sum == 0)  
        printf("%d harshad number", n);  
    else  
        printf("%d not harshad number", n);  
   
    return 0;  
}  
