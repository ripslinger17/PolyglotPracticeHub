/*
    Author: Riya Patel
    Doc: 8, April 2023
    Objective: average of 3 values 
*/

#include<stdio.h>
void main()
{
    int a, b, c, sum;
    float avg;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    printf("Enter the value of c : ");
    scanf("%d", &c);
    sum = a + b + c;
    printf("sum of a b and c is %d ", sum);
    avg = (float)sum / 3;
    printf("\nthe average of a b and c is : %.2f", avg);
}