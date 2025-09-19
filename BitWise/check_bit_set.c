#include<stdio.h>

void main()
{
    int num,pos;
    printf("enter the number\n");
    scanf("%d",&num);
    printf("enter the bit need to be checked\n");
    scanf("%d",&pos);
    if (num & (1<<pos))  //we can use (num>>pos)&1 -> 0 or 1 also  num&(1<<pos)-> it will give low or high
    {
        printf("%d bit is set\n",pos);
    }
    else
    {
        printf("%d bit is clear\n",pos);
    }


}