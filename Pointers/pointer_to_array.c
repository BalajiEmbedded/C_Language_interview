//When you perform arithmetic operations (+, -, etc.) on a pointer, the result depends on the size of the data type it points to.
//incase of int aaddress is getting incremented by the 4bytes sizeof(int)
#include<stdio.h>

void main()
{
    int a[3]={1,2,3};
    int *ptr,i;
    ptr=a;
    for(i=0;i<3;i++)
    {
        printf("%d",*(a+i));
    }
}