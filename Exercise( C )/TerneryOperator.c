#include<stdio.h>
/*
discount=amount>5000?true condition : false condition?
*/
int main()
{
    int amount=5500;
    int discount=amount>5000?10:0;
    printf("Discount is %d%%", discount);
    return 0;
}