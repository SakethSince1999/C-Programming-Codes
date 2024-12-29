//Program0004 - Arithmetic Operations - ADD, SUBTRACT, MULTIPLY, DIVISION(REMINDER, QUOTIENT)

#include<stdio.h>
int main()
{
    int a,b;            
    int sum,difference,product,remainder,quotient;

    printf("Give first number: ");
    scanf("%d",&a);
    printf("Give second number: ");
    scanf("%d",&b);

    sum = a+b;
    difference = a-b;
    product = a*b;
    remainder = a%b;
    quotient = a/b;

    printf("Given numbers are %d and %d",a,b);
    printf("\nSum of %d and %d is: %d",a,b,sum);
    printf("\nDifference between %d and %d is: %d",a,b,difference);
    printf("\nProduct of %d and %d is: %d",a,b,product);
    printf("\nRemainder after Division of %d and %d is: %d",a,b,remainder);
    printf("\nQuotient after Division of %d and %d is: %d",a,b,quotient);
}