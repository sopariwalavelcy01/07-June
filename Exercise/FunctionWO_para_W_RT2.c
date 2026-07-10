#include<stdio.h>
/*Funnction  with parameter without return type*/

void result(int marks)
{
    if(marks>=35)
    {
        printf("pass");
    }
    else
    {
        printf("fail");
    }
}
 int main()
    {
        result(74); 
return 0;
}