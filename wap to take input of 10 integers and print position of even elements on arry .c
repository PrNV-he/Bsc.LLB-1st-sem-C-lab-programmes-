#include <stdio.h>
void main()
{
    int array[10],i;
    printf("enter 10 intergers:\n");
    for(i=0; i<10; i++){
        scanf("%d",&array[i]);
    }

    printf("Position of even elements;");
    for (i=0;i<10;i++){
    if(array[i]%2==0)
    {
        printf("%d",i);
    }
    }
}
