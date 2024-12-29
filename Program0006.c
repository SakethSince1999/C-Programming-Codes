//Program0006 - Swap two numbers using third variable

#include<stdio.h>

int main()
{
    int a=10,b=20,c=0;

    printf("Values before Swapping: a is %d, b is %d, c is %d",a,b,c);
    c=a;
    a=b;
    b=c;
    c=0;    //Optional Step
    printf("\nValues after Swapping: a is %d, b is %d, c is %d",a,b,c);
}