#include<stdio.h>

//Declaration
struct Demo
{
    int i;      //4
    float f;    //4
    char ch;    //1     Generates padding
};              //12

int main()
{
    struct Demo dobj;

    printf("%d\n",sizeof(dobj));        //12 padding

    return 0;
}