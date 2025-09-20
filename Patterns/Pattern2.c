//    * * * *
//    * * *
//    * *
//    * 

#include<stdio.h>

void main()
{
    int num,i,j;
    printf("enter the number\n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        for(j=i;j<num;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}