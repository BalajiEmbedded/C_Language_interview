#include<stdio.h>

void main()
{
    int a[5],i,j,l,sl;

    printf("enter an elemts of an array\n");

    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    
    if(a[0]>a[1])
    {
        l=a[0];
        sl=a[1];
    }
    else
    {
        l=a[1];
        sl=a[0];
    }

    for(i=2;i<5;i++)
    {
        if(a[i]>l)
        {
            sl=l;
            l=a[i];
        }
        else if(a[i]>sl)
        {
            sl=a[i];
        }
    }

    printf("lergest is %d\n",l);
    printf("second largest is %d",sl);

}