#include<stdio.h>

void main()
{
    int num,even,odd;
    printf("enter the number\n");
    scanf("%d",&num);
    even= num & 0X5555;
    odd=num & 0xAAAA;
    int res= (even>>1) | (odd <<1);
    printf("after swap %d\n",res);
}