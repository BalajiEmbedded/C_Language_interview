#include<stdio.h>

void main()
{
    int num;
    printf("enter the number to be checked\n");
    scanf("%d",&num);

    if (num >0 && (num & (num-1)) ==0)
    {
        printf("%d is power of 2\n",num);
    }
    else
    {
        printf("%d is not a power of 2\n",num);
    }
}