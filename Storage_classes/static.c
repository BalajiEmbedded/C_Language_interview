#include<stdio.h>

void display()
{
    static int i=10;
    i=i+1;
    printf("%d\n",i);
}




void main()
{
    display();
    display();
    display();
}