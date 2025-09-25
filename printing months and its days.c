#include<stdio.h>
void main()
{
    int num;
    printf("Enter month number:");
    scanf("%d",&num);

    switch(num){
    case 1: printf("Your month is january ,it has 31 days");
    break;
    case 2: printf("Your month is feburary ,it has 28 days");
    break;
    case 3: printf("Your month is march ,it has 31 days");
    break;
    case 4: printf("Your month is april ,it has 30 days");
    break;
    case 5: printf("Your month is may ,it has 31 days");
    break;
    case 6: printf("Your month is june ,it has 30 days");
    break;
    case 7: printf("Your month is july ,it has 31 days");
    break;
    case 8: printf("Your month is august ,it has 31 days");
    break;
    case 9: printf("Your month is september ,it has 30 days");
    break;
    case 10: printf("Your month is october ,it has 31 days");
    break;
    case 11: printf("Your month is november ,it has 30 days");
    break;
    case 12: printf("Your month is december ,it has 31 days");
    break;
    default:
    printf("value enterd isnt valid");
    }
}
