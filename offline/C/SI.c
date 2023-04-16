/*
    Author: Riya Patel
    Doc: 14, April 2023
    Objective: interest value
*/

#include<stdio.h>
void main()
{
    // i=prn/10
    int prn;
    float i;
    printf("Enter value of prn : ");
    scanf("%d", &prn);
    i = (float)prn / 10;
    printf("Intrest : %.3f", i);
}