#include<stdio.h>
/*
1<5 --->True 1
4>6 --->0
A==a--->0
5>=5--->1
5>5 --->0
5!=5 --->0
abhi!=abhi-->0
*/
int main ()
{
    int passcode=1234; int actual_passcode=1234;
    if(passcode==actual_passcode)
    {
        printf("Passcode is correct");
    }
    return 0;
}