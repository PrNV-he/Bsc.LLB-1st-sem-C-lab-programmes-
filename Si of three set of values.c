#include<stdio.h>
void main()
{

    float SI1,SI2 , SI3 ,p1,p2,p3,r1,r2,r3,t1,t2,t3;

    printf("emter the value of p1:\t");
    scanf("%f",&p1);
    printf("enter the value of p2:\t");
    scanf("%f",&p2);
    printf("enter the value of p3:\t");
    scanf("%f",&p3);

     printf("enter the value of r1:\t");
    scanf("%f",&r1);
     printf("enter the value of r2:\t");
    scanf("%f",&r2);
     printf("enter the value of r3:\t");
    scanf("%f",&r3);

     printf("enter the value of t1:\t");
    scanf("%f",&t1);
        printf("enter the value of t2:\t");
    scanf("%f",&t2);
        printf("enter the value of t3:\t");
    scanf("%f",&t3);

    SI1=(p1*r1*t1)/100;
    SI2=(p2*r2*t2)/100;
    SI3=(p3*r3*t3)/100;

    printf("SI-1 =%.2f\t",SI1);
    printf("SI-2 =%.2f\t",SI2);
    printf("SI-3 =%.2f",SI3);
}

