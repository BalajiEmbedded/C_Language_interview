#include<stdio.h>

void main()
{
    int num,*ptr;
    printf("enter the number\n");
    scanf("%d",&num);
    ptr=&num;

    printf("number is %d\n",num);
    printf("number is %d\n",*ptr);
    printf("address is %p\n",&num);
    printf("address is %p\n",ptr);

}

