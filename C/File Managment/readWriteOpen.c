#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *ptr=NULL;
    char ch,str[100];
    ptr = fopen("r.txt", "r");
    if(ptr==NULL)
    {
        printf("\nERROR");   
    }
    printf("\nEnter the word you want to append ");
    gets(str);
    ptr = fwrite(str,sizeof(str),strlen(str),"r.txt");
    fputs(str, ptr);
    printf("\nSUCCESSFULLY APPENDED");
    fclose(ptr);
}
