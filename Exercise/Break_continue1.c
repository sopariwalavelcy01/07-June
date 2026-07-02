#include<stdio.h>
int main ()
{
    for(int  i=1;i<=5;i++)
    {
        if(i==4)
        {
            printf("\nproduct %d number is not available",i);
            continue;
        }
        printf("\nproduct %d number is available",i);
    }
    return 0;
}