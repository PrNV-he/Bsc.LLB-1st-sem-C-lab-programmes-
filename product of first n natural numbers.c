#include <stdio.h>
void main()
{
    int i,n,product=1;
    printf("natural number till where you want product of:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
            product = product*i;
    }
            printf("Product=%d\n",product);

}
