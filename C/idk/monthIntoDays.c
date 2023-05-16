/*
    Author: Riya Patel
    DOC: 5, May 2023
    Objective: golf
*/

#include <stdio.h>
void main()
{
    int day,year,month;
    printf("Enter days: ");
    scanf("%d",&day);
    
    month = day / 30;
    day = day % 30;
    printf("Days: %d \n", day);
    printf("Months: %d \n", month);
    
}