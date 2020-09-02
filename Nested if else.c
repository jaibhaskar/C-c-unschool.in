/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{

    float p;
    printf("Enter Percentage :\n");
    scanf("%f",&p);
    if(p>80)
        printf("A Grade\n");    
    else if((p<80)&&(p>=70))
        printf("B Grade\n");
    else if((p<70)&&(p>=60))
        printf("C Grade\n");
    else if((p<60)&&(p<=45))
        printf("D grade\n");
    else
        printf("Fail\n");
        
    

    return 0;
}
