#include<stdio.h>

void main()
{
    int *ptr,num=1;
    ptr=&num;
    char *temp=(char *)ptr;
    if (*temp == 1)
    {
        printf("it is little enidian\n");
    }
    else{
        printf("it is big enidian\n");
    }
}