#include<stdio.h>
/*
if(condition)
{
    //statements
}
*/
int main()
{
    int balance=10000;
    int amount=5000;
    if(balance>amount)
    {
        printf("\nWithdraw successful");
    }

    int marks=45;
    if(marks>=35)
    {
        printf("\nYou are pass");
    }
    return 0;
}