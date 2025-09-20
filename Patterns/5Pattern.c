//   * * * * *
//    * * * *
//     * * * 
//      * *
//       *

#include<stdio.h>

void main()
{
    int i,j,k,num;
    printf("enter the number\n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }

        for(k=i;k<num;k++)
        {
            printf("* ");
        }

        printf("\n");


    }
}