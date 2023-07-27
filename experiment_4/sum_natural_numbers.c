#include <stdio.h>
int main() {
int num,i,sum=0;
printf("Enter a number:");
scanf("%d",&num);
i=1;
while(i<=num){
        sum+=i;
    i++;
}
printf("Sum=%d",sum);
return 0;
}
