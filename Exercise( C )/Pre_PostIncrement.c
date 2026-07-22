#include<stdio.h>
/*post increment
Pre increment

Trick:
x++ (Post-increment)= Use first, Increase later.
++x (Pre-increment) = Increase first, Use later.
*/
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