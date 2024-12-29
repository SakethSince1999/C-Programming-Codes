//Program3 - Give input from the "scanf" and print it.

#include<stdio.h>

int main()
{
    char x;     //Variable name is x & data type is char
    int y;      //Variable name is y & data type is int
    float z;    //Variable name is z & data type is float
    
    printf("Type the first letter of your name: ");
    scanf("%c",&x);                 //Here '&x' represents the address of variable 'x'
    printf("You entered: %c",x);    //Here '%c' is the format specifier for 'char'
    printf("\n");

    printf("Type a Number: ");
    scanf("%d",&y);                 //Here '%d' is the format specifier for 'signed integer'. %i can also be used.
    printf("You entered: %d",y);
    printf("\n");

    printf("Type a Floating Number: ");
    scanf("%f",&z);                 //Here '%f' is the format specifier for 'floating point number'
    printf("You entered: %f",z);
}