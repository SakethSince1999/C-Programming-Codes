//Program0008 - Area of Circle

#include<stdio.h>
#define PI 3.14         //Defining macro using preprocessor directive #define

int main()
{
    float radius,area;

    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);
    area = PI*radius*radius;
    printf("The area of the Circle with radius %f is %f",radius,area);
}