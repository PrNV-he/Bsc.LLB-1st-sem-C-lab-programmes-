#include <stdio.h>
void main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);

    if(n%2==0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number provided is odd");
    }
}
