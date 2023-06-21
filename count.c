#include<stdio.h>
void main()
{
    int n1,count=0;
    printf("enter a number : ");
    scanf("%d", &n1);
    while(n1!=0)
    {
        n1 = n1 / 10;
        count++;
    }
    printf("%d", count);
}