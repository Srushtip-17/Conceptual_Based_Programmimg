#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;     
        
        void fun()
        {   cout<<"Inside Base fun \n"; }

        void gun()
        {   cout<<"Inside Base gun \n"; }

        void sun()
        {   cout<<"Inside Base sun \n"; }

};      //8 bytes

class Derived : public Base
{
    public:
        int x,y;

        void fun()      //redefination
        {   cout<<"Inside Derived fun"; }

        void sun()      //redefination
        {   cout<<"Inside Derived sun"; }

        void run()      //defination (fresh)
        {   cout<<"Inside Derived run"; }
};      //16 bytes

int main()
{
    cout<<sizeof(Base)<<"\n";       //8
    cout<<sizeof(Derived)<<"\n";    //16
   
    return 0;
}