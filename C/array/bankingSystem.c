/*
    Author : Riya Patel
    DOC : 20 July,2023
    Objective : Design a Banking App in Python that has the following functionalities:-
User can:-
◆OPEN ACCOUNT by username and password of his choice. On Opening account, his initial balance will be ₹ 25,000/-.
Once he opens account, he can login by re-entering the same username & password.
◆LOGIN is compulsory to perform any task such as withdrawal, deposit or balance check. If the user name or password do
not match, he can not Login. Once he is logged in, he can do as many transactions as he wants. He needs to Logout after
he finishes all the transactions
◆DEPOSIT will enable user to deposit amount of money of his choice. His balance should be updated after the task
completes.
◆WITHDRAW will enable user to withdraw amount of money of his choice. The only condition is that his balance at any
point can not go less than ₹10,000/-. If this can happen after his withdrawal, your program must not allow that
transaction. His balance should be updated after the task completes.
◆CHECK BALANCE will show the latest updated balance to user.
◆LOGOUT will exit the user from the program
You should use these functions in your program: login(), deposit(), withdraw(), checkBalance()
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void Login()
{
    char p[20], u[20], check = 0, cp[20], cu[20], uc = 0, up = 0;
    printf("\nCREATE ACCOUNT");
    printf("\nENTER YOUR USERNAME: ");
    scanf("%s", &u);
    printf("\nENTER YOUR PASSWORD: ");
    scanf("%s", &p);
    printf("\nSUCESSFULLY CREATED ACCOUNT");
    printf("\nLOGIN TO YOUR ACCOUNT");
    while (1)
    {
        printf("\nENTER YOUR USERNAME: ");
        scanf("%s", &cu);
        printf("\nENTER YOUR PASSWORD: ");
        scanf("%s", &cp);
        uc = strcmp(cu, u);
        up = strcmp(cp, p);
        if (uc == 0 && up == 0)
        {
            printf("\nLOGGED IN SUCCEFULLY");
            break;
        }
        else
        {
            printf("\nPLEASE TRY AGAIN");
        }
    }
}

void deposite(balance)
{
    int balance, deposite;
    printf("\nENTER THE AMOUNT YOU WANT TO DEPOSITE: ");
    scanf("%d", &deposite);
    balance = deposite + balance;
    printf("\nYOUR ACCOUNT CONTAINS %d AMOUNT", balance);
}
void withdraw(balance)
{
    int sub;
    printf("\nENTER THE AMOUNT YOU WANT TO WITHDRAW: ");
    scanf("%d", &sub);
    if (balance >= 10000 + sub)
    {
        balance = balance - sub;
        printf("\nYOUR AMOUNT CONTAINS: %d", sub);
        return balance;
    }
    else
    {
        printf("\nYOUR TRANSACTION IS INVALID");
        printf("\nYOUR BALANCE HAS TO BE ATLEAST 10000");
    }
}
void checkBalance(balance)
{
    printf("\nYOUR TOTAL BALANCE IS : %d", balance);
}
int main()
{
    int a,money=25000;
    Login();
    while (1)
    {
        printf("\nWHAT YOU WANT TO DO IN YOUR ACCOUNT ");
        printf("\n1......DEPOSITE");
        printf("\n2......WITHDRAW");
        printf("\n3......CHECKBALANCE");
        printf("\n4......EXIT");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            deposite();

        case 2:
            withdraw();
        case 3:
            checkBalance();
        case 4:
            exit(0);
        }
    }
}
