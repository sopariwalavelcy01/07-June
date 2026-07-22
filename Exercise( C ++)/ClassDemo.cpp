/*
class : class is a collection data member
and member function blueprint
blueprint 

object :  gives permission  to access functionality of class

employee
class
id
name
salary

object
velcy 
krishna
*/

#include<iostream>
using namespace std;
class employee
{
    public :
    int emp_id;
    string emp_name;
    int salary;
};
int main()
{
    employee e1;  //object created
    e1.emp_id=1;
    e1.emp_name="velcy";
    e1.salary=898989;

    cout<<"employee id is " <<e1.emp_id<<endl;
    cout<<"employee name is " <<e1.emp_name<<endl;
    cout<<"employee salary is " <<e1.salary;
    return 0;
}

