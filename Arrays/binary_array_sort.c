#include<stdio.h>

void swap(int *p1,int *p2)
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}

void main()
{
    int a[]={0,0,1,1,1,1,0,0,1,0,1,0},size;
    size=sizeof(a)/sizeof(a[0]);
    int pos=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]==0)
        {
            swap(&a[i],&a[pos]);
            pos++;
        }
    }
    for(int i=0;i<size;i++)
    {
        printf("%d",a[i]);
    }
}