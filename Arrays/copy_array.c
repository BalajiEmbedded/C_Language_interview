#include<stdio.h>

void main()
{
    int a[5],b[5],i;
    printf("enter the elemnts of an array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        b[i]=a[i];
    }

    for(i=0;i<5;i++)
    {
        printf("%d",b[i]);
    }
}