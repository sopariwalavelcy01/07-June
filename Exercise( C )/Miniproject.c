#include<stdio.h>

/*
1.Add student
2.View student
3.Update marks
4.Exit

input
choice
roll no
name
marks

*/
int main()
{
    int choice,roll_no,marks;
    char name[50];
    while(1)
    {
        printf("\n1.Add student");
        printf("\n2.View student");
        printf("\n3.Update marks");
        printf("\n4.Exit");
        printf("\nenter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("\nenter roll no : ");
                scanf("%d",&roll_no);
                printf("enter name : ");
                scanf("%s",name);
                printf("enter the marks : ");
                scanf("%d",&marks);
                break;

            case 2:
                printf("\nroll no is : %d",roll_no);
                printf("\nname is : %s",name);
                printf("\nmarks is : %d",marks);
                break;

            case 3:
                printf("\nenter updated marks : ");
                scanf("%d",&marks);
                printf("marks update successfully ");
                break;

            case 4:
                printf("\nsuccessfully exit ");

            return 0;

            default :
                printf("Invalid  choice");

        }
    }
    return 0;
}