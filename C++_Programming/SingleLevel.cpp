#include <iostream>
using namespace std;

//Inheritance

class Base
{
    public:
        int i,j;    //characteristics (8 byte)

        Base()      //Default constructor
        {
            cout<<"Inside Base Constructor\n";
            i = 0;
            j = 0;
        }

        ~Base()
        {
            cout<<"Inside Base Destructor\n";
        }

        void fun()      //Behaviour
        {
            cout<<"Inside Base fun \n";
        }



};

class Derived : public Base
{


};

int main()
{
    Base bobj;

   // Derived dobj;

    return 0;
}