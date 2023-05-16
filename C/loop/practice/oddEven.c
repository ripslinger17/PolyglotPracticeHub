/*
    Author: Riya Patel
    Doc: 11, May 2023
    Objective: odd print , even sum
*/

#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 0; i <= 50; i++)
    {
        if(i%2==0)
        {
            sum = sum + i;
        }
        else
        {
            printf(" %d ", i);
        }
    }
    printf("\nsum= %d ", sum);
}