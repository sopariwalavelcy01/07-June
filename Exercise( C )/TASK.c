#include <stdio.h>

float CalculateBill(int units)
{
    if (units <= 100)
    {
        return units * 2;
    }
    else if (units <= 200)
    {
        return units * 3;
    }
    else
    {
        return units * 5;
    }
}

int main()
{
    printf("Your bill is %.2f\n", CalculateBill(185));
    return 0;
}