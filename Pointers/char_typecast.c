#include<stdio.h>

void main()
{
   int num=1028,*ptr;
   ptr=&num;

   char *p=(char *)ptr;

   printf("%d",*p);
}