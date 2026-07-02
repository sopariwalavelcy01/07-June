#include<stdio.h>
/*
if(condition)
{
    //statements
}
    else
{
    //statements
}
*/
int main ()
{
    int balance=10000;
    int amount=15000;
    if(balance>amount)
    {
        printf("\nWithdraw successful");
    }
    else
    {
        printf("\nInsufficient balance");
    }

    int marks=25;
    if(marks>=35)
    {
        printf("\nPass");
    }
    else
    {
        printf("\nFail");
    }
    return 0;
}