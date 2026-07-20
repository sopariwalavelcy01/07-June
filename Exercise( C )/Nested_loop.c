#include<stdio.h>
/*
nested loop:
1st loop - outer loop(rows)
2nd loop - inner loop(columns)
*/
int main()
{
    for(int i=1; i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            printf("\nrow no is %d and column no is %d",i,j);
        }
    }
    return 0;
}