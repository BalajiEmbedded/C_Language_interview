#include<stdio.h>

void main()
{
    int num=10,i;
    printf("enter the number\n");
    scanf("%d",&num);
    for(i=31;i>=0;i--)
    {
        printf("%d",(num>>i)&1);
    }

}