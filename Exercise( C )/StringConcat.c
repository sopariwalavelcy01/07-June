#include<stdio.h>
#include<string.h>
int main ()
{
    char  str1[]="TOPS ";
    char  str2[]="Technologies";

    printf("%s",strcat(str1,str2));

    char str3[]=" \nCity ";
    char str4[]="state";

    printf("%s",strcat(str3,str4));

    return 0;
}