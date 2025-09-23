//malloc will allocate the dynamic memory but not contagious and allocated mem contain garbage , it will return the void pointer
//malloc(no of bytes of memory)

#include<stdio.h>
#include<stdlib.h>
void main()
{

    int *ptr;
    ptr=malloc(sizeof(int));
    printf("%p\n",ptr);
    *ptr=100;
    printf("%d\n",*ptr);
    free(ptr);
    printf("%d\n",*ptr);

}