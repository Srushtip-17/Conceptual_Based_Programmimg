#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Size=0;
    float *Marks = NULL;
    int i=0;        //loop counter

    printf("Enter number of elements : \n");
    scanf("%d",&Size);

    //Dynamic Memory Allocation
    Marks = (float *)calloc(Size , sizeof(float));

    printf("Enter your marks : \n");

    for(i=0 ; i<Size ; i++)
    {
        scanf("%f" , &Marks[i]);
    }

    printf("Marks are : \n");

    for(i=0 ; i<Size ; i++)
    {
        printf("%f \n" , &Marks[i]);
    }

    free(Marks);

    return 0;
}