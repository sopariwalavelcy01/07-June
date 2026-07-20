#include<stdio.h>
/*
file handling 

open

write/read

close

w=write
a=append
r=read
fprintf-file mein write krne ke liye
student.txt file ma dekhase output 
*/
int main()
{
    FILE *fp;
    //to create and open file
    fp=fopen("student.txt","a");
    //to write into file
    fprintf(fp,"tops technologies\n");
    fclose(fp);
    return 0;
}