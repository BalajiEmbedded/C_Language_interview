#include<stdio.h>

void main()
{
    int a[5],i;
    printf("enter the elemnts of an array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    int largest=a[0];
    int size=sizeof(a)/sizeof(a[0]);

    for(i=0;i<size;i++)
    {
        if (a[i]>largest)
        {
            largest=a[i];
        }
    }
printf("lagest is %d\n",largest);

}