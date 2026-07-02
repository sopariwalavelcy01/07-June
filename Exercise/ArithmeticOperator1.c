#include<stdio.h>
int main()
{
    int current_amount=12000, deposit = 5000,withdraw=1500;

    int new_account_balance = current_amount + deposit;
    printf("After deposit is: %d\n",new_account_balance);
    int after_withdraw = new_account_balance - withdraw;
    printf("After withdraw is: %d\n",after_withdraw);
    return 0;
}
