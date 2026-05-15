#include<stdio.h>

int main()
{
    //Static Memory Allocation
    float Marks[5];        //20 bytes memory

    int i = 0;  //loop counter

    printf("Enter your Marks : \n");

    // Iteration
    //    1      2       3   
    
    for(i = 0 ; i < 5 ; i++)
    {
        scanf ("%f " , &Marks[i]);
    }

    printf("Entered Marks are : \n");

//         1       2      3
    for(i = 0 ; i < 5 ; i++)
    {
        printf("%f \n" , Marks[i]);
    }

    return 0;
}