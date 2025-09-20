#include<stdio.h>

void main()
{
    int a[5],i,b[5],size,j;
    size=sizeof(a)/sizeof(a[0]);
    printf("enter elemnts of an array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0,j=size-1;i<size;i++,j--)
    {
        b[j]=a[i];
    }

    for(i=0;i<5;i++)
    {
        printf("%d\n",b[i]);
    }

}