#include<stdio.h>
#include<stdint.h>

void main()
{
    uint8_t num=0x12;
    uint8_t num1,num2,res;
    res=((num& 0xF0)>>4) | ((num & 0x0F)<<4);
    printf("after swapping 0x%x",res);
}