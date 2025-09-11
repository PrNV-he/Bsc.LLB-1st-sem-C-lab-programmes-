#include <stdio.h>
void main(){

int a,b,max;
printf("enter the value of a:");
scanf("%d",&a);

printf("enter the value of b:");
scanf("%d",&b);

max = (a>b)?a:b;

printf("the maximum of %d and %d is %d\n",a,b,max);

}
