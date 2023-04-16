/*
    Author: Riya Patel
    Doc: 8, April 2023
    Objective: swaping 2 variables
*/

#include<stdio.h>
void main()
{
    int a=10, b=20, c=0;
    printf("a=%d b=%d", a, b);
    c = a;
    a = b;
    b = c;
    printf("\na=%d b=%d", a, b);
}
