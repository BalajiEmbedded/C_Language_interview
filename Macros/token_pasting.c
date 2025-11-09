#include<stdio.h>

#define uart(reg) uart##reg##_reg

void main()
{
    int uart1_reg;

    uart(1)=5;

    printf("%d",uart1_reg);

}