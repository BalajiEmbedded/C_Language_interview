//    *
//    * *
//    * * *
//    * * * *

#include<stdio.h>

void main()
{
    int num,i,j;
    printf("enter the number\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("* ");
        }
    printf("\n");
    }
}


