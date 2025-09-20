//1
//22
//333
//4444
//555
//66
//7


#include<stdio.h>

void main()
{
    int num,i,j,mid,upto;
    printf("enter the number\n");
    scanf("%d",&num);
    mid=(num+1)/2;

    for(i=1;i<=num;i++)
    {
        upto= (i<=mid) ? i : num+1-i;
        for(j=0;j<upto;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}