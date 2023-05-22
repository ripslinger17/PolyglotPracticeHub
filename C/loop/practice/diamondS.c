/*
    Author: Riya Patel
    Doc: 8, May 2023
    Objective: Straight Diamond
*/
#include <stdio.h>
void main()
{
    
    printf("Enter a value: ");
    scanf("%d", &value);

    for (int v = 1; v <= value; v++)
    {

        for (int i = 0; i <= 5; i++)
        {
             for (int j = 5; j >= i; j--)
             {
                 printf(" ");
             }
             for (int k = 1; k <= i;k++)
             {
                 printf(" *");
             }
             printf("\n");
         }

    for (int i = 0; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int k = 5; k >= i;k--)
        {
            printf(" *");
        }
        printf("\n");
    
    }
    }
}

// for (int i = 0; i <= 5; i++)
// {
//     for (int j = 5; j >= i; j--)
//     {
//         printf("*");
//     }
//     printf("\n");
// }