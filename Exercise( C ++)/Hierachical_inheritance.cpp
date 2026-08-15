/*
1 parent multiple child
*/
#include<iostream>
using namespace std;

class employee
{
    public:
    string name;
    void login()
    {
        cout<<name<<" logged in "<<endl;
    }
};

class developer :public employee
{
  public:
  void write_code()
  {
    cout<<"write_code"<<endl;
  }  
};

class tester: public employee
{
    public:
    void test_software()
    {
        cout<<"Test the software"<<endl;
    }
};

class manager: public employee
{
    public:
    void assign_task()
    {
        cout<<"assign task"<<endl;
    }
};

int main()
{
    developer d1;
    tester t1;
    manager m1;

    d1.name="velcy";
    d1.login();
    d1.write_code();

    t1.name="rahul";
    t1.login();
    t1.test_software();

    m1.name="yash";
    m1.login();
    m1.assign_task();
    return 0;

}