//Program0007 - Swap two numbers without using third variable

#include<stdio.h>

int main()
{
    int a = 10;
    int b = 20;

    printf("Before swapping: a is %d, b is %d,",a,b);
    a=a+b;          //a becomes 30
    b=a-b;          //b becomes 10
    a=a-b;          //a becomes 20
    printf("\nAfter swapping: a is %d, b is %d,",a,b);
}