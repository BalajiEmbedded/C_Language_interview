#include<stdio.h>

void main()
{
    int n;
    printf("enter the no of elemts\n");
    scanf("%d",&n);
    int a[n],i,j,count=0;
    printf("enter the elemnts of an array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=2;j<a[i];j++)
        {
            if(a[i] % j ==0)
            {
                break;
            }
        }
        if(j==a[i])
        {
        count +=1;
        }
    }

    printf("%d prime numbers are there\n",count);

}