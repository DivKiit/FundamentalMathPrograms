#include<stdio.h>
void main()
{int sec,min,hour,remaining;
printf("enter time in sec =");
scanf("%d",&sec);
hour=sec/(60*60);
remaining=sec%(60*60);
min=remaining/60;
sec=remaining%60;
printf("hour=%d",hour);
printf("\nmin=%d",min);
printf("\nsec=%d",sec);
}