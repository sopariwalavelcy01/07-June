#include<stdio.h>
int main()
{
    int salary[5]={15000,6000,7000,1000,9000}; 
    int min;
    min=5574557;
    for(int i=0;i<5;i++)
    {
        if(min>salary[i])
        {
                min=salary[i];    
        }   
    }
    printf("\nMinimum salary is %d",min);
        
    return 0;
}
