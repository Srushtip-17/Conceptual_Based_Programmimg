#include<stdio.h>

int Addition(int No1,int No2)
{
    int Ans=0;
    Ans=No1+No2;    //business logic
    return Ans;
}

int main()
{
    int Ret=0,A=11,B=10;    //local variables

    Ret=Addition(A,B);

    printf("Addition is: %d",Ret);

    return 0;
}

//execution sequence -> 
//10-11-12-13-14-3-4-5-6-7-14-15-16-17-18-os