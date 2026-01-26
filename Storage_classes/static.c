//Retains its value between function calls
//Has a lifetime of the entire program
//Is initialized only once
//static local variables have scope with in the function & retains its value & dont reintilized
//global static varibales have scope of the file
//static variables are stored in the data section of memmory

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