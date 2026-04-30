#include<stdio.h>

int main()
{
    int i=11;   //signed 32 bit but only gets 31 (1st bit is 0)
    int j=-11;  //signed 32 bit but only gets 31 (1st bit is 1)

    unsigned int k=11;  //always negative 32 bit but only gets 32 
    signed int a=11;    //positive
    signed int b=-11;   //negative

    return 0;
}
//only integer can be short and long