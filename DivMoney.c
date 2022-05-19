#include<stdio.h>
/*Divyaranjan Sahoo
Resolving money in paisa into rupees and paisa*/
void main()
{int Paisa,Rupees,Paise;
printf("Enter the amount in Paisa ~ ");
scanf("%d",&Paisa);
Rupees = Paisa/100;
Paise = Paisa-(Rupees*100);
printf("The resolved amount is %d rupees and %d paise",Rupees,Paise);
}
