#include<stdio.h>
/*Divyaranjan Sahoo
Conversion of Celsius to Fahrenheit*/
int main()
{
  float Celsius, Fahrenheit;
  printf("Enter the temperature in Celsius ~ \n");
  scanf("%f",&Celsius);
  Fahrenheit = (1.8*Celsius)+32;
  printf("The temperature in Fahrenheit is %f \n", Fahrenheit );
  return 0;
}
