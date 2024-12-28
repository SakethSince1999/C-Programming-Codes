//Program0002 - Data Types & Modifiers
//Data Types - int,char,float,double
//Modifiers - signed,unsigned,long,short

#include<stdio.h>
int main()
{
    char a0;
    unsigned char a1;
    signed char a2;
    int b0;                 //signed int by default
    unsigned int b1;
    signed int b2;
    long int b3;
    short int b4;
    long long int b5;
    float c0;
    double d0;
    long double d3;
    
    printf("Size of char: %zu bytes\n", sizeof(a0));
    printf("Size of unsigned char: %zu bytes\n", sizeof(a1));
    printf("Size of signed char: %zu bytes\n", sizeof(a2));
    printf("Size of int: %zu bytes\n", sizeof(b0));
    printf("Size of unsigned int: %zu bytes\n", sizeof(b1));
    printf("Size of signed int: %zu bytes\n", sizeof(b2));
    printf("Size of long int: %zu bytes\n", sizeof(b3));
    printf("Size of short int: %zu bytes\n", sizeof(b4));
    printf("Size of long long int: %zu bytes\n", sizeof(b5));

    printf("Size of float: %zu bytes\n", sizeof(c0));
    printf("Size of double: %zu bytes\n", sizeof(d0));
    printf("Size of long double: %zu bytes\n", sizeof(d3));
}