#include<stdio.h>

void main()
{
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    int res= num & 1;

    if (res ==1)
    {
        printf("%d is odd number\n",num);
    }
    else
    {
        printf("%d is even number\n",num);
    }
}