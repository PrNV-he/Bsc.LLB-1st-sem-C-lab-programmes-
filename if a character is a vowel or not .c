#include<stdio.h>
void main(){
char ch;

printf("enter your character:");
scanf("%c",&ch);

switch(ch)
{

    case 'a': printf("its a vowel");
    break;
case 'e': printf("its a vowel");
break;
case 'i': printf("its a vowel");
break;
case 'o': printf("its a vowel");
break;
case 'u': printf("its a vowel");
break;
    default:
    if((ch>='0')&&(ch<='9')){
 printf("%c is a digit",ch);
}
else if((ch>='a')&&(ch<='z'))
{ printf("its a consonant");
}
else {
    printf("its neither a digit nor a consonant");
}

}
}
