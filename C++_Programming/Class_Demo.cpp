#include<iostream>
using namespace std;

class Demo
{
    public:     //if not written by default it is private
        int i;
        float f;

};
int main()
{
    Demo dobj;

    cout<<sizeof(dobj)<<"\n";       //8
    cout<<&dobj;        //hexadecimal

    return 0;
}