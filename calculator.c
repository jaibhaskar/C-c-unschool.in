/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{

    int a,b;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    printf("sum of %d and %d is %d\n",a,b,a+b);
    printf("Difference of %d and %d is %d\n",a,b,a-b);
    printf("Product of %d and %d is %d\n",a,b,a*b);
    printf("Quotient upon dividing %d by %d is %d\n",a,b,a/b);
    printf("Remainder upon dividing %d by %d is %d\n",a,b,a%b);

    return 0;
}
