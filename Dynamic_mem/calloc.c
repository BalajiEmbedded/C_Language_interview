//calloc(no of elemnts,size in bytes)
//it will give the contagious memory locations
//intitilize allocated bytes with 0

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *ptr;
    ptr=calloc(5,sizeof(int));

    for(int i=0;i<5;i++)
    {
        printf("%d\n",ptr[i]);
    }

}