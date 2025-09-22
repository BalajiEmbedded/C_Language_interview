#include<stdio.h>

void main()
{
    char ch='b';
    char *ptr;

    ptr=&ch;

    printf("the character is %c\n",*ptr);
    printf("the address is %p\n",ptr);
}