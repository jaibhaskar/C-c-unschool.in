/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n=0,sum=0;
    do{
        printf("Enter number :\n");
        scanf("%d",&n);
        sum=sum+n;
    }while(n!=0);
    
    printf("Sum of entered numbers :'%d",sum);

    return 0;
}
