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

        void fun()      //non static method
        {
            cout<<"Inside Non Static fun\n";
            cout<<"i:"<< this -> i<<"\n";
            cout<<"j:"<< this -> j<<"\n";
            cout<<"k:"<< this -> k<<"\n";
        }

        static void gun()       //static method
        {
            cout<<"Inside Static gun\n";
            //cout<<"k:"<< this -> k<<"\n"; 
            //'this' may only be used inside a nonstatic member function
            cout<<"k:"<< k<<"\n";   //static
        }
};

int Demo :: k=11;   //global

int main()
{
    cout<<Demo::k<<"\n";        //11

    Demo :: gun();

    Demo dobj;

    cout<<dobj.i<<"\n";     //0 
    cout<<dobj.j<<"\n";     //0

    dobj.fun();

    cout<<sizeof(dobj);     //8 
    //only non static will get memory; 
    //this is applicable for only non static data
    return 0;
}