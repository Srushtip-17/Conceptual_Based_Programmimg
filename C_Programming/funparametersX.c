#include<stdio.h>

void Display(int no1,int no2)
{
    printf("%d %d\n",no1,no2);
}

int main()
{
    int A =11, B =21;   //main stack frame (local variables)

    Display(A,B);       //call by value

    return 0;
}

//execution sequence -> 
//8-9-10-11-12-3-4-5-6-13-14-os