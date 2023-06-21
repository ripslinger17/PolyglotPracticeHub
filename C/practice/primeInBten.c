/*
    Author : Riya Patel
    DOC : 19 June,2023
    Objective : prime number in between user inputed number
*/

#include <stdio.h>
void main()
{
    int f, l,p,c;
    printf("enter the starting number: ");
    scanf("%d", &f);
    printf("enter the last number: ");
    scanf("%d", &l);

    for (int i = f; i <= l;i++)
    {
        c = 0;
        for (int j = 1; j <= i; j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            printf("%d\n", i);
        }
    }
}