#include<iostream>
using namespace std;
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
    string name;
    while(true)
    {
        cout<<"1.Add student"<<endl;
        cout<<"2.View student"<<endl;
        cout<<"3.Update view"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"enter your choice : ";
        cin>>choice;
        switch(choice)
        {
            case  1:
                cout<<"enter roll no : "<<endl;
                cin>>roll_no;
                cout<<"enter name : "<<endl;
                cin>>name;
                cout<<"enter marks : "<<endl;
                cin>>marks;
                break;
            
            case 2:
                cout<<"roll no is : "<<roll_no<<endl;
                cout<<"name is : "<<name<<endl;
                cout<<"marks  is : "<<marks<<endl;
                break;

            case 3:
                cout<<"enter  updated  marks : "<<endl;
                cin>>marks;
                cout<<"marks update successfully\n";
                break;
            
            case 4:
                cout<<"succesfully exit"<<endl;

                return 0;

            default:
                cout<<"Invalid choice"<<endl;
            
        }


    }
    return 0;
}
