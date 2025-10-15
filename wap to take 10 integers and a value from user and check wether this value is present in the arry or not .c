#include <stdio.h>
void main()
{
    int array[10],i, value , found;
    printf("enter 10 integers:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&array[i]);

    }
    printf("Enter the value you want to search:");
    scanf("%d",&value);

    for(i=0;i<10;i++)
    {
        if(array[i]== value)
          {
              found=1;
          }
      }
       if(found){
        printf("%d is present in the array",value);
       }
else{
    printf("%d is not present in the array");
}
}
