#include<stdio.h>
#include<stdint.h>
void main()
{
    uint8_t temp1,temp2,num;
    printf("enter the number\n");
    scanf("%d",&num);
    temp1=num>>1;
    temp2=num<<7;
    //temp1=num<<1;
    //temp2=num>>7;
    num=temp1|temp2;
    printf("rotated number is %d",num);
}