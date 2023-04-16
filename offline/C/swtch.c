/*
    Author:Riya Patel
    Doc:6, April 2023
    Objective: To learn the basics of datatypes
*/
#include <stdio.h>

void main()
{
    int x;
    float y;
    int choice;
    char z;
    long int p;
    char str[30];

    printf("\n1------int");
    printf("\n2------float");
    printf("\n3------char");
    printf("\n4------longInt");
    printf("\n5------String");
    printf("\n6------exit");
    printf("Enter the choice: ");
    scanf("%i", &choice);
    switch (choice)
    {
    case 1:
        printf("\nEnter the int: ");
        scanf("%d", &x);
        printf("\nThe value of int is : %d", x);
        break;
    case 2:
        printf("\nEnter the float: ");
        scanf("%f", &y);
        printf("\nThe value of int is : %.2f", y);
        break;
    case 3:
        printf("\nEnter the char: ");
        scanf("%c", &z);
        printf("\nThe value of int is : %c", z);
        break;
    case 4:
        printf("\nEnter the lonf float: ");
        scanf("%lf", &p);
        printf("\nThe value of int is : %ld", p);
        break;
    case 5:
        printf("\nEnter the string: ");
        scanf("%s", str);
        printf("\nThe value of int is : %s", str);
        break;
    case 6:
        exit(0);
    } // end of switch

} // end of main
