#include<stdio.h>

int main()
{
    char ch='A';
    int i=11;
    float f=90.99f;
    double d = 78.67890;
    
    printf("L values of all variables\n");
    
    printf("%u\n",&ch);
    printf("%u\n",&i);
    printf("%d\n",&f);
    printf("%d\n",&d);

    //% format specifier
    return 0;
}