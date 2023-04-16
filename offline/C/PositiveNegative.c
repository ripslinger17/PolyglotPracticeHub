/*
    Author: Riya Patel
    DOC: 16, April 2023
    Objective: printing aeroplane
*/

#include <stdio.h>
int main()
{
    int no;
    printf("Enter a number : ");
    scanf("%d", &no);
    if (no > 0)
    {
        printf("%d is positive", no);
    }
    else if(no==0)
    {
        printf("you entered number 0");
    }
    else
    {
        printf("%d is negative", no);
    }
}
