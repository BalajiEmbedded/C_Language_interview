#include<stdio.h>

void main()
{
    unsigned int num,i,rev=0;
    printf("enter the number\n");
    scanf("%d",&num);

    for(i=0;i<32;i++)
    {
        if(num&(1<<i))
        {
            rev = rev | (1 << (31-i));
        }
    }
    
printf("%d\n",rev);


}