#include<stdio.h>
#include<stdint.h>

void main()
{

    int a[]={1,2,3,4,5,1,2,3,4,5,1};
    uint8_t i,size,res=0;
    size=sizeof(a)/sizeof(a[0]);
    for(i=0;i<size;i++)
    {
        res^=a[i];
    }
printf("odd no of times is %d\n",res);

}