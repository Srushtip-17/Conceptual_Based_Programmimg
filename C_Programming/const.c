#include<stdio.h>

int main()
{
    int i=10;
    const int j=10;

    i++;    //allowed
    //j++;    //not allowed

    //j=j+1


    return 0;
}