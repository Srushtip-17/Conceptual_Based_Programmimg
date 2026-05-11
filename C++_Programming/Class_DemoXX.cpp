#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;      //characteristics(has memory)
        float f;    //characteristics(has memory)

        void fun()      //behaviour (no memory)
        {
            cout<<"Inside fun\n";
        }
};
int main()
{
    Demo dobj;

    cout<<dobj.i<<"\n";     //garbage value

    dobj.fun();     //inside fun
   

    return 0;
}