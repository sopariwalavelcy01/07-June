#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++) //2
    {
        if(i==3) //3==3
        {
            printf("\nStudent %d is absent",i); 
            continue; /// skip the iteration when i=3
        }
        printf("\nStudent %d is present",i);
    }
    return 0;
}



