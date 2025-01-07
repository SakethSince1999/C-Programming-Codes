//Program0010 - Temperature Conversion using Switch Statement

#include<stdio.h>
int main()
{
    int choice;
    float celsius,C,fahrenheit,F;

    printf("Temperature Conversion\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Please select any choice from above: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:     //Celsius to Fahrenheit
            printf("Temperature Conversion from Celsius to Fahrenheit\n");
            printf("Give Temperature in Celsius:");
            scanf("%f",&celsius);
            F = (celsius*9/5)+32;
            printf("The Temperature in Fahrenheit is %f",F);
        break;

        case 2:     //Fahrenheit to Celsius
            printf("Temperature Conversion from Fahrenheit to Celsius\n");
            printf("Give Temperature in Fahrenheit:");
            scanf("%f",&fahrenheit);
            C = (fahrenheit - 32)*5/9;
            printf("The Temperature in Celsius is %f",C);
        break;

        default:
            printf("Invalid choice");
        break;
    }
    return 0;
}