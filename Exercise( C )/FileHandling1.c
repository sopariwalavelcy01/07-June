#include<stdio.h>
/*
open

read

close
*/

int main()
{
    FILE *fp;
    char ch[100];
    //to create and open a  file
    fp=fopen("student.txt","r");
    //to read from file
    while(fgets(ch,sizeof(ch),fp)!=NULL)
    {
        printf("%s",ch);
    }

    fclose(fp);
    return 0;
}