#include<stdio.h>
/*
for ()- when its confirmed how many times the loop will run
while () - when its not confirmed how many times the loop will run
do while() -when its not confirmed how many times the loop will run but it will run at least once
*/
int main()
{
    int pin;
    while(pin!=1234)
    {
        printf("enter your pin\n");
        scanf("%d",&pin);
    }
    printf("pin is correct\n");

    return 0;
}