#include<stdio.h>

int Display()
{
    return 11;    
}

int main()
{
    int Ret=0;   //main stack frame (local variables)

    Ret = Display();       //call 

    printf("%d\n",Ret);

    return 0;
}

//execution sequence -> 
//8-9-10-11-12-3-4-5-12-13-14-15-16-os