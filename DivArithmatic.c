#include<stdio.h>
/*Divyaranjan Sahoo
Arithmatic Operations*/
int main()
{
    int x,y,Sum,Difference,Multiplication,Division,Remainder;
    printf("Enter the values with comma between them : \n");
    scanf("%d,%d",&x,&y);

    Sum = x+y;
    Difference = x-y;
    Multiplication = x*y;
    Division = x/y;
    Remainder = x%y;

    printf("Addition Result is - %d \n", Sum);
    printf("Difference of the numbers is - %d \n", Difference);
    printf("Multiplication of the numbers is %d \n", Multiplication);
    printf("Division of the numbers is %d \n", Division);
    printf("Remainder when first number is divided by second is %d \n", Remainder);
    return 0;
}
