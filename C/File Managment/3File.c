// Write a program that takes 20 integers from user and creates 3 files - odd.txt, mod5.txt and prime.txt.Store all the odd numbers in odd.txt, all numbers which are divisible by 5 in mod5.txt and all prime numbers in prime.txt.Do not forget to close the files that you open.
// 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31

#include <stdio.h>
#include<math.h>
int main()
{
    FILE *hell;
    int i, a[5], limit, flag;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    hell = fopen("odd.txt", "w");
    fprintf(hell, "Odd numbers: ");
    for (i = 0; i < 5; i++)
    {
        if (a[i] % 2 == 1)
        {
            fprintf(hell, "\n %d", a[i]);
        }
    }
    fclose(hell);

    hell = fopen("mod5.txt", "w");
    fprintf(hell, "modBy5 numbers: ");
    for (i = 0; i < 5; i++)
    {
        if (a[i] % 5 == 0)
        {
            fprintf(hell, "\n %d", a[i]);
        }
    }
    fclose(hell); 
 
    hell = fopen("prime.txt", "w");
    fprintf(hell, "Prime numbers: ");
    for (i = 0; i < 5; i++)
    {
        limit = sqrt(a[i]);
        flag = 1;
        for (i = 2; i <= limit; i++)
        {
            if (a[i] % i == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1 && a[i] != 0 && a[i] != 1)
        {
            fprintf(hell, "\n %d", a[i]);
        }
        else
        {
            continue;
        }
    }
    fclose(hell);


}

// hell = fopen("even.txt", "w");
// fprintf(hell, "Even numbers: ");
// for (i = 0; i < 10; i++)
// {
//     if (a[i] % 2 == 0)
//     {
//         fprintf(hell, "\n %d", a[i]);
//     }
// }
// fclose(hell);

// hell = fopen("even.txt", "w");
// fprintf(hell, "Even numbers: ");
// for (i = 0; i < 10; i++)
// {
//     if (a[i] % 2 == 0)
//     {
//         fprintf(hell, "\n %d", a[i]);
//     }
// }
// fclose(hell);

// int num, limit, flag, i;


