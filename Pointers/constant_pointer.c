//we can change the value of the pointer but we can not make the pointer to point to anotehr address

#include<stdio.h>

void main()
{
    int num1=9,num2=10;
    int * const p=&num1;
    printf("%d",*p);
    //p=&num2; this is an error we cannot assign the addres to it
}