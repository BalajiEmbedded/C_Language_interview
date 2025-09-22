// void pointers can not be deferenced directly -> we need to type cast it to proper type
//Pointer type casting means converting a pointer of one type to a pointer of another type.

#include<stdio.h>
#include<stdlib.h>

void main()
{
    void *ptr;
    int x=10;
    ptr=&x;
    //printf("value before typecast is %d\n",*ptr); //we willget an error here
    int *ptr1=(int *)ptr;
    printf("the value is %d",*ptr1);
}