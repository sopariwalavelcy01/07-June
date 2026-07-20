#include<stdalign.h>
#include<stdbool.h>
/*logical operator 
&& : Logical AND
|| : Logical OR
!: Logical NOT
*/

/*
&& is 2 comdition must be true then only it will return true
|| is 1 condition must be true then only it will return true
! is neither condition is true then it will return true
*/
int main()
{
    int age=20;
    if(age>=18 && age<=60)
    {
        printf("You are eligible for voting");
    }
    else
    {
        printf("You are not eligible for voting");
    }
    return 0;
}