#include<iostream>
using namespace std;


class Hello
{
    public:
    //Here we are using the concept of  Polymorphism
    //same name different parameter
    //this is called fuction Overloading
    //because of this no need to remember fuction name
    //but parameter should be different to avoid the confusion of compiler(ambiquity)
    //syntactic sugar
    int Addition(int a , int b)
    {
        return a+b;
    }
    int Addition(int a , int b, int c)
    {
        return a+b+c;
    }
    int Addition(int a , int b,int c,int d)
    {
        return a+b+c+d;
    }
};

int main()
{
    Hello hobj;
    cout<<hobj.Addition(10,20)<<"\n";
    cout<<hobj.Addition(10,20,30)<<"\n";
    cout<<hobj.Addition(10,20,30,40)<<"\n";

    return 0;
}