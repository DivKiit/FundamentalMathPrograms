#include<stdio.h>
/*Divyaranjan Sahoo
Area of Rectangle Calculator*/
int main()
{
  float Length, Breadth, Area;
  printf("Enter the Length and Breadth of triangle seperated by coma ~ \n");
  scanf("%f,%f",&Length,&Breadth);
  Area = Length*Breadth;
  printf("The area of the Triangle is %f \n", Area );
  return 0;
}
