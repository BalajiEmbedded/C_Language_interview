#include<stdio.h>

void main()
{
    int num=0x12345678,res;
    res=((num&0x000000FF)<<24) | ((num&0x0000FF00)<<8) |((num&0X00FF0000)>>8) | ((num& 0xFF000000)>>24);
    printf("converted is 0x%x\n",res);
}