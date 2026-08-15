#include <iostream>
#include <string>
using namespace std;

class Account
{
private:
    string name;
    int accountNumber;
    double balance;

public:
    
    Account(string n, int acc, double b)
    {
        name = n;
        accountNumber = acc;
        balance = b;
    }

    void deposit(double amount)
    {
        balance = balance + amount;
        cout << "Deposit of " << amount << endl;
        cout << "Balance: " << balance << endl;
    }

    void withdraw(double amount)
    {
        if(amount <= balance)
        {
            balance = balance - amount;
            cout << "Withdraw of " << amount << endl;
            cout << "Balance: " << balance << endl;
        }
        else
        {
            cout << "Insufficient funds" << endl;
        }
    }

    void displayBalance()
    {
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    Account a1("Velcy",101,0);

    a1.deposit(5000);
    a1.withdraw(8000);
    a1.displayBalance();

    return 0;
}