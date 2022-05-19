#include<stdio.h>
/*Divyaranjan Sahoo
Complex number induction*/

void main()
{
  float a,b,c,d,Real,Imaginary;
  printf("Enter the first complex number distinctively ~ \n");
  scanf("%f,%f",&a,&b);
  printf("Enter the second complex number distinctively ~ \n");
  scanf("%f,%f",&c,&d);
  Real = a+c;
  Imaginary = b+d;
  printf("The resultant complex number is \n");
  printf("%f + %fi",Real,Imaginary);
}
