#include<stdio.h>

void main()
{
    int num,pos;
    printf("enter the number\n");
    scanf("%d",&num);
    printf("enter the position\n");
    scanf("%d",&pos);
    num=num & ~(1<<pos);
    printf("%d\n",num);
}