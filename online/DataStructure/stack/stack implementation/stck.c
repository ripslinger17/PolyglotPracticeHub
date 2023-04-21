/*
    Author :- Riya Patel
    DOC:- 18 april, 2023
    Objective:- stack implementation
*/

#include<stdio.h>
#define SIZE 5
int top = -1;
void push();
void pop();
void display();
void main()
{
    int choice;
    while(1)
    {
        clrscr();
        printf("1-------------PUSH\n");
        printf("2-------------POP\n");
        printf("3-------------PEEP\n");
        printf("4-------------EXIT\n");
        printf("enter the choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                push();
                display();
                break;

            case 2:
                push();
                display();
                break;
            
            case 4:
                exit(0);
            }//end of switch
    }//end of while
}//end of main

void push()
{
    int num;
    if(top==SIZE-1)
    {
            printf("STACK IS OVERFLOW");

    }
    else{
            top++;
            printf("\nEnter the number to be pushed: ");
            scanf("%d", &num);
            stack[top] = num;
    }//end of else
}//end of push

void pop()
{
    if(top==-1){
            printf("the stack is empty");
    }
    else{
            top--;
    }//end of else
}

void display()
{
    int i;
    int y = 5;
    for (i = top; i > -0;i--)
    {
            printf("-----%d------",stack[i]);
            y++;
    }//end of for
}//end of display
