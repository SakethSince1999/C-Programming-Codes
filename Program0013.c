//Program0013 - Program0011 using "else-if"

#include<stdio.h>

int main()
{
    int number;

    printf("Enter a Number: ");
    scanf("%d",&number);

    if(number>0)
    {
        printf("Given Number is POSITIVE");
    }

    else if(number<0)
    {
        printf("Given Number is NEGATIVE");
    }

    else
    {
        printf("Given Number is ZERO");
    }
}