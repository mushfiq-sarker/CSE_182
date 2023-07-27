#include<stdio.h>
#include<math.h>
main()
{ int a,b,p;
 float area,s;
printf("Enter the two sides of the rectangle:");
scanf("%d%d",&a,&b);
p=2*(a+b);
area=a*b;
printf("The perimeter of the rectangle is =%d unit\n",p);
printf("The area of the rectangle is=%f sq. unit",area);
}
