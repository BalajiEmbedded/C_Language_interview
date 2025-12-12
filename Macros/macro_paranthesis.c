//Rule: Always wrap macro parameters inside parentheses.

#include<stdio.h>

#define square(x) ((x) * (x))  // it should be clear or else it will lead to wrong resluts

void main()
{
    int res1,res2;
    res1=square(3+2);
    res2=square(4);

    printf("%d %d",res1,res2);
}