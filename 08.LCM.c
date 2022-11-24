 #include <stdio.h>
main()
{
  printf("RA2211042010042\n");

    int number1, number2, max,i,lcm;//i is counter

    printf("Enter two positive integers: ");
    scanf("%d %d", &number1, &number2);

    
    max = (number1 > number2) ? number1 : number2;
    

    for(i=1; i <= number1 && i <= max; ++i)
    {
        // Checks if i is factor of both integers
        if(number1%i==0 && number2%i==0)
            gcd = i;
    }

        lcm=(number1*number2)/gcd;
        printf("L.C.M of %d and %d is %d", number1, number2, lcm);
    


    
}
