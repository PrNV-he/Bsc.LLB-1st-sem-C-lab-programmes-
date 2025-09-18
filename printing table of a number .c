#include <stdio.h>
void main()
{

    int n,i;
    printf("Enter the number you want table of:");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
        printf("%d\n",n*i);
}
