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
    public: 
        int x;

        Derived()
        {
            cout<<"Inside Derived Constructor\n";
            x=0;
        }

        ~Derived()
        {
            cout<<"Inside Derived Destructor\n";
        }  

        void gun()
        {
            cout<<"Inside gun of Derived \n";
        }
};

int main()
{
    cout<<"Inside Main\n";

    Derived dobj;   //Storage class : auto

    cout<<"size of base class object is : "<<sizeof(Base)<<"\n";        //8
    cout<<"size of Derived class object is : "<<sizeof(Derived)<<"\n";  //12
    cout<<dobj.i<<"\n";     //0
    cout<<dobj.j<<"\n";     //0
    cout<<dobj.x<<"\n";     //0

    dobj.fun();
    dobj.gun();

    cout<<"End of Main\n";

    return 0;
    
}