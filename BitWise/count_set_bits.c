#include<stdio.h>

void main()
{
    int num,count=0,i;
    printf("enter the number\n");
    scanf("%d",&num);
    for(int i=31;i>=0;i--)
    {
        if(num & (1<<i))
        {
            count+=1;
        }

    }
printf("count of set bits is %d",count);

}