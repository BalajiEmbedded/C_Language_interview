#include<stdio.h>
#include<stdint.h>

void xor_without_operator(uint8_t num1,uint8_t num2)
{
    uint8_t bit1,bit2=0;
    uint8_t res=0;
    uint8_t mask=(1<<7);
    for(uint8_t i=0;i<8;i++)
    {
        bit1=(num1<<i) & mask;
        bit2=(num2<<i) & mask;
        res=res<<1;
        if(bit1!=bit2)
        {
            res=res|1;
        }
    }
printf("xor result is %d",res);
    
} 

void main()
{
xor_without_operator(2,4);
    
}