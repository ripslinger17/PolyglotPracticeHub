/*
    Author:Riya Patel
    Doc:10, may 2023
    Objective: vowel or consonent
*/
#include <stdio.h>

void main()
{
    char a;
    printf("\nEnter a value: ");
    scanf("%c", &a);
    switch (a)
    {
    case 'a':
        printf("VOWEL");
        break;

    case 'e':
        printf("VOWEL");
        break;
    case 'i':
        printf("VOWEL");
        break;

    case 'o':
        printf("VOWEL");
        break;

    case 'u':
        printf("VOWEL");
        break;

    case 'A':
        printf("VOWEL");
        break;

    case 'E':
        printf("VOWEL");
        break;
    case 'I':
        printf("VOWEL");
        break;

    case 'O':
        printf("VOWEL");
        break;

    case 'U':
        printf("VOWEL");
        break;

    default:
        printf("CONSONENT");
        break;
    }
}