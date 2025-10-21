#include<stdio.h>
void main()
{
int num,i,j,res=0;
printf("enter the number");
scanf("%d",&num);
for(i=0;i<32;i++)
{
    res=res<<1;
    if(num& 0x01)
    {
        res=res|0x01;
    }
    num=num>>1;
}

printf("after reverse the number is %d",res);

}