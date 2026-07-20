#include<stdio.h>
/*
Assignment Operators:
Addition assignment: a += b (a = a + b) 
Subtraction assignment: a -= b (a = a - b)
Multiplication assignment: a *= b (a = a * b)
Division assignment: a /= b (a = a / b)
Modulus assignment: a %= b (a = a % b)
*/
int  main()
{
    int a=10;
    int balance=2000;
    int deposit=200;
    balance+=deposit; // balance = balance + deposit
    printf("Final balance: %d\n", balance);
    return 0;
}