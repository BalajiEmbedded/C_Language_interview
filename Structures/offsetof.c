#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>

typedef struct
{
    char ch;
    int val;
    float valf;
    long vall;
}mydef;



void main()
{
mydef data;
int of1,of2,of3,of4;
of1=offsetof(mydef,ch);
of2=offsetof(mydef,val);
of3=offsetof(mydef,valf);
of4=offsetof(mydef,vall);
printf("%d %d %d %d",of1,of2,of3,of4);

}