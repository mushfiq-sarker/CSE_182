#include<stdio.h>
main()
{
 int r,d;
 float c, area, pi=3.1416;
 printf("Enter the radius:");
 scanf("%d",&r);
 d=2*r;
 c=2*pi*r;
 area=pi*r*r;
 printf("The diameter=%d \nThe circumference=%f\nThe area=%f",d,c,area);
}
