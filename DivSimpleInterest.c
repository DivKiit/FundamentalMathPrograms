#include<stdio.h>
/*Divyaranjan Sahoo
Simple Interest Calculator*/
int main()
{
    float Principal,Rate,Time,Interest,Amount;
    printf("Enter the Principal, Annual Rate, and Time in years  : \n");
    scanf("%f,%f,%f",&Principal,&Rate,&Time);

    Interest = Principal*Rate*Time*0.01;
    Amount = Principal + Interest;

    printf("The interest is - %f \n", Interest);
    printf("Amount is - %f \n", Amount);
    return 0;
}
