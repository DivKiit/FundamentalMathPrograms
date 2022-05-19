#include<stdio.h>
/*Divyaranjan Sahoo
Area of Circle Calculator*/
int main()
{
  float Pi, Radius, Area;
  Pi = 3.142857;
  printf("Enter the radius of circle ~ \n");
  scanf("%f",&Radius);
  Area = Pi*Radius*Radius;
  printf("The area of the Circle is %f \n", Area );
  return 0;
}
