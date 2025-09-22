#include<stdio.h>

void main()
{
    char str1[]="balaji";
    char *ptr;
    ptr=str1;
    printf("size of char pointer is %d\n",sizeof(ptr));
    while(*ptr != '\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
}