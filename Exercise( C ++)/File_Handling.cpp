#include<iostream>
#include<fstream>
using namespace std;
/*
write
ofstream
read
*/
int main()
{
    ofstream fout;

        //1.open n create file
            fout.open("student.txt",ios::app);
        //2.write into file
            fout<<"velcy";
            fout<<"\nmarks : 45";
        //3.close file
            fout.close();
return 0;

}