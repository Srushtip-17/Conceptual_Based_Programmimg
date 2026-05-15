#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;          //non static (instance)
        int j;          //non static (object)
        static int k;   //static    (class)

        Demo()
        {
            this -> i = 0;
            this -> j = 0;
        }
};

int Demo :: k=11;   //global

int main()
{
    Demo dobj;

    cout<<Demo::k<<"\n";

    cout<<dobj.i<<"\n";     //0 
    cout<<dobj.j<<"\n";     //0

    cout<<sizeof(dobj);     //8 
    //only non static will get memory; 
    //this is applicable for only non static data
    return 0;
}