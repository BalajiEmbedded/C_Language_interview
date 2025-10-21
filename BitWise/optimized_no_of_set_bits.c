#include<stdio.h>
#include<stdint.h>

void main()
{
    uint8_t num,count=0;
    printf("enter the number\n");
    scanf("%d",&num);
    while(num)
    {
     num=num&(num-1);
     count+=1;
    }
    printf("no of setbits in a number is %d\n",count);
}