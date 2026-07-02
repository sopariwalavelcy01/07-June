#include<stdio.h>
#include<string.h>
int main ()
{
    char source[]="TOPS";
    char destination[100];
    strcpy(destination,source);
    printf("\n%s",destination);

    char email[]="zoo@tops.com";
    char backup[150];
    strcpy(backup,email);
    printf("\n%s",backup);
    return 0;
}