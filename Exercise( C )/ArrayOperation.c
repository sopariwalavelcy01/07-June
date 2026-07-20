#include<stdio.h>
/*
maximum salary
input 
process
max=first salary
for each salary in the list
salary[i]>max
max=salary
output max
*/
int main()
{
    int salary[5]={5000,6000,7000,8000,9000}; 
    int max;
    max=salary[0];
    for(int i=0;i<5;i++)
    {
        if(max<salary[i])
        {
            max=salary[i];
        }
    }
    printf("\nMaximum salary is %d",max);
    
    return 0;
}
