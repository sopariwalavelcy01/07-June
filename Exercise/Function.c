#include<stdio.h>
/*
function : block of code that can be used multiple time anywhere

a=150000+5000
b=
return_type func_name(parameter)
{
operation
}
*/
    int calculate_salary(int salary)
    {
        return salary+5000;
    }

int main ()
{
    printf("\nTotal salary is %d",calculate_salary(150000));
    printf("\nTotal salary is %d",calculate_salary(80000));

    return 0;
}
