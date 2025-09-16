#include <stdio.h>
void main(){
 int p ,r , t;
 float SI;

 printf("enter the value of principle:");
 scanf("%d",&p);

 printf("enter the value of rate:");
 scanf("%d",&r);

 printf("enter the value of time:");
 scanf("%d",&t);

 SI = (p*r*t)/100;

 printf("SI =%f",SI);
}
