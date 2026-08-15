#include<iostream>
using namespace std;
/*
inheritance : acquiring the function function or
attribute of another class
person
    name
    age
    |
    |
    |
    student
    employee
    customer
*/

class person  
{
    public :
    string name;

    void displayPerson()
    {
        cout<<"name  is "<<name<<endl;
    }
};

class  student : public person
{
    public :
    int marks;

    void displayMarks()
    {
        cout<<"marks is "<<marks<<endl;
    }
};
int main()
{
    student  s1;
    s1.name="VELCY";
    s1.displayPerson();
    s1.marks = 45;
    s1.displayMarks();
}
