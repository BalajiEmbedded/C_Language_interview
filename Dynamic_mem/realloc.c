//Resizes previously allocated dynamic memory.
//Can be used with memory allocated by malloc() or calloc().
//realloc(ptr,newsize)
//Returns new pointer (may be same as old or different if memory moved)
//Original memory is freed automatically if it moves

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *arr;
    int n=3;
    arr=malloc(3 * sizeof(int));

    for(int i=0;i<n;i++)
    {
        arr[i]=i+1;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }

    arr=realloc(arr,5*sizeof(int));

    arr[3]=4;
    arr[4]=5;

    for(int i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }


}

