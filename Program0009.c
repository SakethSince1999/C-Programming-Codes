//Program0009 - Area of Triangle

#include<stdio.h>
#define half 0.5f        //Defining macro using preprocessor directive #define - f indicates float

int main()
{
    int base,height;
    float area;

    printf("Enter the base length of the triangle: ");
    scanf("%d",&base);
    printf("Enter the height of the triangle: ");
    scanf("%d",&height);
    area = half*base*height;        //typecasting concept
    printf("The area of the triangle with base:%d, height:%d is %f",base,height,area);
}