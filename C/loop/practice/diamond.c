/*
    Author: Riya Patel
    Doc: 8, May 2023
    Objective: pyramid
*/
#include <stdio.h>
void main()
{
    int value;
    printf("Enter a value: ");
    scanf("%d", &value);

    for (int v = 1; v <= value; v++)
    {
        for (int i = 0; i <= 5; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }

    for (int i = 0; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    }
}