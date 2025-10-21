#include<stdio.h>
#include<stdint.h>

void main()
{
    uint8_t num,count=0;
    printf("enter the number in which set bits need to be checked:");
    scanf("%d",&num);
    while(num>0)
    {
    if((num&1)>0)  
    {
        count+=1;
    }
    num=num>>1;
    }
    printf("no of set bits is %d\n",count);
}