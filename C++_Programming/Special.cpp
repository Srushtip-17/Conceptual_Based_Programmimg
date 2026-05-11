#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;      //characteristics(has memory)
        float f;    //characteristics(has memory)

        Demo()  //this is constructor
        {
            cout<<"Inside Constructor\n";
            i=0;
            f=0.0;
        }

        ~Demo()     //destroys the object
        {
            cout<<"Inside Destructor\n";
        }

        void fun()      //behaviour (no memory)
        {
            cout<<"Inside fun\n";
        }
};
int main()
{
    cout<<"Inside main\n";

    Demo dobj;      //object creation (gets memory)
    
    cout<<sizeof(dobj)<<"\n";       //8

    cout<<dobj.i<<"\n";     //garbage value

    dobj.fun();     //inside fun
   
    cout<<"End of main\n";

    return 0;
}