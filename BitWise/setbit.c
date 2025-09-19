#include<stdio.h>

void main()
{
    int num,pos;
    printf("enter the number\n");
    scanf("%d",&num);
    printf("enter the position to be set\n");
    scanf("%d",&pos);
    num=num | (1<<pos);
    printf("after set: %d",num);

}