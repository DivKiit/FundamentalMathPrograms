#include<stdio.h>
/*Divyaranjan Sahoo
Area of Triangle Calculator*/
int main()
{
  float Base, Height, Area;
  printf("Enter the Base and Height of triangle seperated by coma ~ \n");
  scanf("%f,%f",&Base,&Height);
  Area = 0.5*Base*Height;
  printf("The area of the Triangle is %f \n", Area );
  return 0;
}
