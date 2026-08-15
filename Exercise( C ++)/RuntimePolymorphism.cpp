#include<iostream>
using namespace std;
class animal
{
    public :
        void sound()
        {
            cout<<"animal sound"<<endl;
        }
};

class dog : public animal
{
    public :
        void sound()
        {
            cout<<"dog barks"<<endl;
        }
};

int main()
{
    animal*a;
    dog d;
    a=&d;
    a->sound();
    return 0;
}


// compile time polymorphism- overloading  - same fun name diff parameters
//run time polymorphism - overridding - same  fun name same parameters