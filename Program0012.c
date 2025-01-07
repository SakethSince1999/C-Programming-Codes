//Program0011 - Check the number is Even or Odd
//Using if-else Statement

#include<stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d",&number);

    if(number%2==0)
    {
        printf("Given number %d is an EVEN Number",number);
    }
    else
    {
        printf("Given number %d is an ODD Number",number);
    }
}