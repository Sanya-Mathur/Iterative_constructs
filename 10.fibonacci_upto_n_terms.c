#include <stdio.h>
int main()
{
 
  printf("RA2211042010042\n");
  int i, n;
  int a = 0, b = 1;

  
  int c= a+ b;

  printf("Enter the number of terms: ");
  scanf("%d", &n);

  printf("Fibonacci Series: %d, %d, ", a, b);


  for (i = 3; i <= n; ++i) {
    printf("%d, ", c);
    a = b;
    b =c;
    c= a + b;
  }

  return 0;
}



