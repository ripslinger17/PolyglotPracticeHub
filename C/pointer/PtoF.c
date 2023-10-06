#include<stdio.h>
void scanArr(int *pa)
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3;j++)
        {
            scanf("%d", pa);
            pa++;
        }
    }
}

void printArr(int *pa)
{
    int i, j;
    printf("\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", *pa);
            pa++;
        }
        printf("\n");
    }
}

int main()
{
    int i, j, a[3][3],b[3][3];
    int *pa = &a[0][0],*pb=&b[0][0];
    printf("Enter First Array: \n");
    scanArr(pa);
    printf("Enter Second Array: \n");
    scanArr(pb);
    printf("first Array: \n");
    printArr(pa);
    printf("Second Array array: \n");
    printArr(pb);
    return 0;
}


    // #include <stdio.h>
    // void m(int a[3][3])
    // {
    //     int i, j;
    //     for (i = 0; i < 3; i++)
    //     {
    //         for (j = 0; j < 3; j++)
    //         {
    //             printf("Enter element of a: ");
    //             scanf("%d", &a[i][j]);
    //         }
    //     }
    // }
    // int main()
    // {
    //     int a[3][3], b[3][3], c[3][3];
    //     m(a);
    //     printf("\nUser entered array is \n");
    //     int i, j;
    //     for (i = 0; i < 3; i++)
    //     {
    //         for (j = 0; j < 3; j++)
    //         {
    //             printf("%d ", b[i][j]);
    //         }
    //         printf("\n");
    //     }
    //     return 0;
    // }
