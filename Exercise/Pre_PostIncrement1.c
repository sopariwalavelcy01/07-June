#include<stdio.h>
int main()
{
    int page_number=10;
    int current_view=page_number++;
    printf("\ncurrent page number is : %d", current_view);
    printf("\npage turn over");
    printf("\ncurrent page number is : %d", page_number);


    int current_emp_id=100;
    printf("\ncurrent employee id is : %d", ++current_emp_id);
    return 0;
}
