//wild pointer pointing to the garbage address 
//dereferecing it may cause crash 

#include<stdio.h>

void main()
{
    int *ptr;

    printf("%p\n",ptr);
    printf("%d\n",*ptr);

}