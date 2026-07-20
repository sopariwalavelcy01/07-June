#include<stdio.h>
/*
else if ladder
if(condition)
{
    //statements
}
    else if(condition)
{
    //statements
}
    else if(condition)
{
    //statements
}
    else
{
    //statements
}
*/
int main()
{
    int percentage=67;
    /*
    70>=distinction
    60>=first class 
    50>=second class
    35>=pass class
    fail
    */
       if(percentage>=70)
        {
            printf("\nDistinction");
        }
        else if(percentage>=60)
        {
            printf("\nFirst class");
        }
        else if(percentage>=50)
        {
            printf("\nSecond class");
        }
        else if(percentage>=35)
        {
            printf("\nPass class");
        }
        else
        {
            printf("\nFail");
        }
        
        


        /*
        salary<=3 lakh -->0
        salary<=7 lakh -->5%
        salary<=7 lakh -->10%
        */
       int salary=6000000;
         if(salary<=300000)
          {
                printf("\nNo tax");
          }
          else if(salary<=700000)
          {
                printf("\n5 percent tax");
          }
          else if(salary<=1000000)
          {
                printf("\n10 percent tax");
          }
          else
          {
                printf("\n20 percent tax");
          }
          return 0;
}
