#include<stdio.h>

int main()
{
    int i=11;
    short int j=11;
    long int k=1;

    printf("sizeof int: %lu\n",sizeof(i));      //4
    printf("sizeof short int: %lu\n",sizeof(j));//2
    printf("sizeof long int: %lu\n",sizeof(k)); //8

    return 0;
}
//only integer can be short and long