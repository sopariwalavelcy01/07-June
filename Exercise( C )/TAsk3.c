#include <stdio.h>

float deposit(float balance, float amount)
{
    return balance + amount;
}

float withdraw(float balance, float amount)
{
    if(amount > balance)
    {
        printf("Insufficient Balance\n");
        return balance;
    }

     return balance - amount;
}

int main()
{
    float balance = 10000;

    balance = deposit(balance, 50000);
    printf("Current Balance = %.2f\n", balance);

    balance = withdraw(balance, 70000);
    printf("Remaining Balance = %.2f\n", balance);

    return 0;
}