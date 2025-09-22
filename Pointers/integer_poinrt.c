#include<stdio.h>

void main()
{
    int num,*ptr;
    printf("enter the number\n");
    scanf("%d",&num);
    ptr=&num;
    printf("number is %d",num);
}