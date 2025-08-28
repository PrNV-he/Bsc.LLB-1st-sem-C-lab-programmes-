#include <stdio.h>

void main()
{
    int a , b , result;
    float divides;
    printf("enter value of a:");
    scanf("%d", &a);
    printf("enter value of b:");
        scanf("%d", &b);
        result=a+b;
        printf("sum of %d and %d = %d\n",a,b,result);
        printf("diff of %d and %d = %d\n",a,b,a-b);
        printf("product of %d and %d = %d\n",a,b,a*b);
        divides= a/b;
        printf("div of %d and %d = %f", a,b,divides);
    }
