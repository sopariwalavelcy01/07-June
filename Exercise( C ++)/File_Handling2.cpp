#include<iostream>
#include<fstream>
using namespace std;
/*
open
read
close
*/
int main()
{
    ifstream fin;

        fin.open("student.txt");
        string data;
        while (getline(fin,data))
        {
            cout<<data<<endl;
        }
            fin.close();
return 0;
}