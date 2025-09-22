//pointer pointing to the dead memory loacation or freed memory location
//to avoid dangling pointer set the addreess to NULL after freeing

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *ptr;
    ptr=malloc(sizeof(int));
    *ptr=5;
    printf("%d\n",*ptr);
    free(ptr);
    printf("%d",*ptr);
}