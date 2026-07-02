#include<stdio.h>
/*post increment
Pre increment*/
int main()
{
    int a=10;
    printf("before post increment: %d\n",a);   
    a++;
    printf("Value after post increment: %d\n", a);

    int b=100;
    printf("before pre increment: %d\n",b);    
    ++b;
    printf("Value after pre increment: %d\n", b);
    return 0;
}