#include<stdio.h>
int main()
{
    /*
    Eligible for voting
    */
    int age=19;
    char *result=age>=18?"Eligible for voting":"Not eligible for voting";
    printf("%s",result);
    return 0;
}
