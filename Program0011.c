//Program0011 - Find the number is +ve, -ve or 0
//Using if Statement

#include<stdio.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);

    if(number<0)
    {
        printf("Given number is NEGATIVE");
    }

    if(number>0)
    {
        printf("Given number is POSITIVE");
    }

    if(number==0)
    {
        printf("Given number is ZERO");
    }
}