#include<stdio.h>
int main(){
    
    int marks[]={80,90,74};
    int *ptr=marks;
    printf("address \t value");
    for(int i=0;i<3;i++)
    {
        printf("\n%p\t%d",ptr,*ptr);
        ptr++;
    }
}