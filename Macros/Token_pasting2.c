//This is extremely useful in auto-generating variable names.

#include<stdio.h>

#define make_var(name,num) name##num

void main()
{
    int value1=100;

    printf("%d\n",make_var(value,1));


}