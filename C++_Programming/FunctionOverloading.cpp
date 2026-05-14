#include<iostream>
using namespace std;


class Hello
{
    public:
    //here we have to remember names of every function
    //to avoid this we will be using polymorphism
    //same name different parameter --
    // this is called function overload
    int AdditionTwo(int a , int b)
    {
        return a+b;
    }
    int AdditionThree(int a , int b, int c)
    {
        return a+b+c;
    }
    int Additionfour(int a , int b,int c,int d)
    {
        return a+b+c+d;
    }
};

int main()
{
    Hello hobj;
    cout<<hobj.AdditionTwo(10,20)<<"\n";
    cout<<hobj.AdditionThree(10,20,30)<<"\n";
    cout<<hobj.Additionfour(10,20,30,40)<<"\n";

    return 0;
}