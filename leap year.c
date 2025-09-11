#include <stdio.h>
void main()
{

    int choice;
    printf("enter the year you want:");
    scanf("%d",&choice);

    if(choice%4==0){
        printf("this year is a leap year");
    }
    else{
        printf("this year is not a leap year");
    }

    }
