#include <stdio.h>

void main()
{
    float length , width , area , perimeter ;
    printf("enter the value of length:");
    scanf("%f", &length);
    printf("enter ther value of width:");
    scanf("%f", &width);

    area= length*width;
    perimeter=2*(length+width);
    printf("area of the rectanlge= %f\n", area);
    printf("perimeter of the rectangle= %f\n", perimeter);

}
