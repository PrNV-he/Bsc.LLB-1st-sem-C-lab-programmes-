#include <stdio.h>
void main(){

    int age; 
    printf("Enter the age of the person:")
    scanf("%d",&age);
     
    if(age>=18)
    {
        printf("Person is eligble to vote");
    
    }
    else
    {
        printf("Person is not eligible to vote");

    }
}