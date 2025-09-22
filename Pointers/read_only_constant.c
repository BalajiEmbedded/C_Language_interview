#include<stdio.h>

void main()
{
    int num1=4,num2=8;
    const int * const p=&num1;
    printf("%d",*p);
    //*p=10; //it is not possible
    //p=&num2; //it is not possible
}