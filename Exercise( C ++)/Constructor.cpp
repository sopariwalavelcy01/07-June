#include<iostream>
using namespace std;
/*
constructor is a function which is 
called automatically when
object is created

1.same name as class
2.no return type
*/

class Student 
{
    int roll_no;
    string name;
    public :
        Student()
        {
            cout<<"inside constructor"<<endl;
            roll_no=1;
            name = "velcy";
        }

        void getData()
        {
            cout<<"roll_no "<<roll_no<<endl;
            cout<<"name "<<name<<endl;

        }
        ~Student()
        {
            cout<<"Destructor called"<<endl;
        }
};
    
        int main()
        {
            Student s1;

            s1.getData();
            return 0;
        }

