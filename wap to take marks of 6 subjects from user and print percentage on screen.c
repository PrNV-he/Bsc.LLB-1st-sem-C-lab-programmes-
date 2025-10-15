#include <stdio.h>
void mainn()
{
    int marks[6] , i , total = 0;
    float percentage;
    printf("Enter the marks of 6 subjects:");
    for (i=0; i<6; i++)
    {
        scanf("%d",&marks[i]);
        total+= marks[i];
    }
    percentage = (total/600.0)*100;
    printf("Percentage:%f",percentage);



    }
