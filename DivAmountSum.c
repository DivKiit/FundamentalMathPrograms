#include<stdio.h>
/*Divyaranjan Sahoo
Taking money in rupees and paisa and
calculating the sum of them.*/
void main()
{
  int a,b,c,d,Rupees,Paise;
  float e;
  printf("Enter the first set of amount in Rupees and Paisa ~ \n");
  scanf("%d,%d",&a,&b);
  printf("Enter the second set of amount in Rupees and Paisa ~ \n");
  scanf("%d,%d",&c,&d);
  e = (a+c)+(b+d)*0.01;
  Rupees = e;
  Paise = (e-Rupees)*100 ;
  printf("The amount is %d rupees and %d paise",Rupees,Paise);
}
