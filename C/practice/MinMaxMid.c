/*          
    Author : Riya Patel
    DOC : 31,
    May 2023 Objective : minimum medium and maximum
*/

#include<stdio.h>
void main()
{
    int a, b, c;
    printf("enter the value of num1 : ");
    scanf("%d", &a);
    printf("enter the value of num2 : ");
    scanf("%d", &b);
    printf("enter the value of num3 : ");
    scanf("%d", &c);

    if(a>b && a>c)
    {
        printf("\na is maximum number");
    }
    else if(b>a && b>c)
    {
        printf("\nb is maximun");
    }
    else if (c > a && c > a)
    {
        printf("\nc is maximum");
    }

    if(a<b && a<c)
    {
        printf("\na is minimum");
    }
    else if(b<a && b<c)
    {
        printf("\nb is minimum");
    }
    else if(c<a && c<b)
    {
        printf("\nc is minimum");
    }

    if(a==b)
    {
        printf("\na and b are same");
    }
    else if(b==c)
    {
        printf("\nb and c are same");
    }
    else if (a == c)
    {
        printf("\na and c are same");
    }
}