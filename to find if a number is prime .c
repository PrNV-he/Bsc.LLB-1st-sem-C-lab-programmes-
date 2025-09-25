#include<stdio.h>
void main()
{
    int n,i;
    printf("enter the value of n:");
    scanf("%d",&n);

    if(n<=1)
    {
        printf("n is not prime.");
    }
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("n is not prime.");
            break;
        }
        else
        {
            printf("n is prime.");
            break;

        }
    }
}
