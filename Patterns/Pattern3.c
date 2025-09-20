//                      *
//                  *   *
//               *  *   *
//            *  *  *   *

#include<stdio.h>

void main()
{
    int num,i,j,k;
    printf("enter the number\n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        for(j=0;j<num-1-i;j++)
        {
            printf(" ");
        }

        for(k=0;k<=i;k++)
        {
            printf("*");
        }

        printf("\n");

    }
}