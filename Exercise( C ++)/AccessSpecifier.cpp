/*
Access specifier who can access our data
public : access everywhere (evryone must know)
private : access within the class(only me)
protected : access inside class and child class only (only share with child)
*/
#include<iostream>
using namespace std;
class employee
{
    private :
    int atm_pin;

    public :
    int emp_id;
    string emp_name;
    
};
int main()
{
    employee e1;  //object created
    e1.emp_id=1;
    e1.emp_name="velcy";

    cout<<"employee id is " <<e1.emp_id<<endl;
    cout<<"employee name is " <<e1.emp_name<<endl;
    return 0;
}