#include<stdio.h>
#include<string.h>
struct student{
    int roll_no;
    char name[100];
    float marks;
};

int main()
{
    struct student s1;
    s1.roll_no=1;
    strcpy(s1.name,"velcy");
    s1.marks=91.22;
    printf("\n roll no is %d",s1.roll_no);
    printf("\n name is %s",s1.name);
    printf("\n marks is %f",s1.marks);
    return 0;


}