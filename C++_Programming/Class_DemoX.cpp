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

    cout<<sizeof(dobj)<<"\n";       //8
    cout<<&dobj;        //hexadecimal

    return 0;
}