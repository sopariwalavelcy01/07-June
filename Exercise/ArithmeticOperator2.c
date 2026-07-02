#include<stdio.h>
#include<string.h>
int main 

/*
strlen() //to get string length
*/    
{
    char password[]="Admin123";
    printf("The length of the string is: %d",strlen(password));

    if(strlen(password)>=8 && strlen(password)<16)
    {
        printf("\nvalid passsword length:");
    }
    else
    {
         printf("\nInvalid password length:");
    }
    return 0;  
}