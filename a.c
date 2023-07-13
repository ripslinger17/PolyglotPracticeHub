#include<stdio.h>
int main()
{
    int a[6], temp, i, n, j, k;
    printf("enter a number:");
    scanf("%d", &n);
    printf("enter numbers in array:");
    for (k = 0; k <= n; k++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= n; i++)
    {
        for (j = i + 1; j <= n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i <= n; i++)
    {

        printf("%d\n", a[i]);
    }
   
}