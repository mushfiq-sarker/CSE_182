#include<stdio.h>
main()
{
 int a,b,p,area;
 printf("Enter length and breadth:");
 scanf("%d%d",&a,&b);
 p=2*(a+b);
 area=a*b;
 printf("Perimeter=%d unit \n The area=%d sq.unit",p,area);
}
