#include<stdio.h>

float calculateEMI(int PA)
{
    return PA/12;
}

int main ()
{
    printf("monthly installment is %f",calculateEMI(350000));
    return 0;
}