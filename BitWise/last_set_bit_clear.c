#include<stdio.h>

void main()
{
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    num=num&(num-1);
    printf("after the last bit clear %d",num);
}