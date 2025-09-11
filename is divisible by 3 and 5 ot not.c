#include <stdio.h>
void main() {
int a;
printf("enter the value of a:");
scanf("%d",&a);

if(a%3==0)
{
    if(a%5==0){
        printf("number is divisible by both");
    }
}
else {
    printf("number is divisble by none");

}
}
