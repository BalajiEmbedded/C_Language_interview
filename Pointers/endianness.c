#include<stdio.h>

void main()
{
    int num=1;
    char *ptr=&num;
    if(*ptr==1)
    {
        printf("it is little endian\n");
    }
    else
    {
    printf("it is big endian\n");
    
    }
}