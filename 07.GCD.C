#include <stdio.h>
int main()
{

  printf("RA2211042010042\n");
  int number1, number2, i, gcd;//i is the counter

    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    for(i=1; i <= number1 && i <= number2; ++i)
    {
        // Checks if i is factor of both integers
        if(number1%i==0 && number2%i==0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d", number1, number2, gcd);

    return 0;}
























