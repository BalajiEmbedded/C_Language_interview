#include<stdio.h>

void main()
{
    int m,n,i,j,loop,k;
    printf("enter first array size\n");
    scanf("%d",&m);
    printf("enter second array size\n");
    scanf("%d",&n);
    int a[m],b[n],c[m+n];
    printf("enter first array elemnts");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("enter second  array elemnts\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }

    if (m>n)
    {
    loop=n;
     for(k=0,i=0;i<loop;i++)
    {
        c[k++]=a[i];
        c[k++]=b[i];
    }

    for(;i<m;)
    {
        c[k++]=a[i++];
    }

    }

    else
    {
    loop=m;
    for(k=0,i=0;i<loop;i++)
    {
        c[k++]=a[i];
        c[k++]=b[i];
    }

        for(;i<n;)
    {
        c[k++]=b[i++];
    }
    }
for(i=0;i<m+n;i++)
{
    printf("%d ",c[i]);
}
}