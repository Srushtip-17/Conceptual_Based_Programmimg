#include<stdio.h>

//Declaration
struct Hello
{
   float f;     //4
   int Arr[3];  //12
}hobj;          //16    

int main()
{
    printf("Size of object is : %lu\n",sizeof(hobj));
    //hobj.f=10.0f;


    return 0;
}