// we can not change the value of the variable but you can  make to pointing to other memory location.


#include<stdio.h>

void main()
{
    int num1=5,num2=6;
    const int *p=&num1; // int const *p -> also valid
    printf("%d\n",*p);
    p=&num2;
    printf("%d",*p);
    //*p=10; //we canot assign a value to the raedonly pointer
    printf("%d",*p);

}