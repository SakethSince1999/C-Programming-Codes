//Program0008 - Area of Circle

#include<stdio.h>
#define PI 3.14         //Defining macro using preprocessor directive #define - double by default

int main()
{
    int radius
    double area;

    printf("Enter the radius of the circle: ");
    scanf("%lf",&radius);
    area = PI*radius*radius;        //typecasting concept
    printf("The area of the Circle with radius %lf is %lf",radius,area);
}