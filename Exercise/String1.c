#include<stdio.h>
int main()
{
    char  address[100];
    printf("enter your address :");
   // scanf("%s",address);
    fgets(address,sizeof(address),stdin);
    printf("your address is : %s",address);
    return 0;
}

//fgets(address,sizeof(address),stdin);
//1st argument → Input kahan store karna hai.
//2nd argument → Kitne characters tak read karna hai.
//3rd argument → Input kahan se lena hai (stdin = keyboard).