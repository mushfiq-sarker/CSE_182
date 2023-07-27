#include<stdio.h>
main()
{
float unit,bill50,bill150,bill250,bill250up,g;
printf("Enter used unit:");
scanf("%f",&unit);
if(unit>0)
{
if(unit<=50)
{
bill50=unit*0.5;
printf("The electricity bill is %f tk",bill50);
}
else if(unit<=150)
{
bill150=(50*0.5)+((unit-50)*0.75);
printf("The electricity bill is %f tk",bill150);
}
else if(unit<=250)
{
bill250=(50*0.5)+(100*0.75)+(unit-150)*1.2;
printf("The electricity bill is %f tk",bill250);
}
else if(unit>250)
{
bill250up=(50*0.5)+(100*0.75)+(100*1.2)+((unit-250)*1.5);
g=(bill250up+bill250up)*0.2;
printf("The electricity bill is %f tk",g);
}
}
else
{
printf("Invalid input!");
}
}
