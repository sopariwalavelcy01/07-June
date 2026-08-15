#include<iostream>
using namespace std;
/*
friend  void display(class_name)
a friend function is an outside function
that can access the private and protected data of a class
*/

class student{
    int marks=65;
    public:
        friend void display(student);
};
void display (student s1)
{
    cout<<"marks is :"<<s1.marks;
}

int main()
{
    student s1;
    display(s1);

    return 0;
}
