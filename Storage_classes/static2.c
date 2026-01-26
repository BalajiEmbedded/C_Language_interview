//here it is a static variable with gloabl scope so it is accessbile thorugh out the file.

#include<stdio.h>

static int i=100;

void main()
{
    printf("%d\n",i);
    printf("%d\n",i+1);
}