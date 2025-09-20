#include<stdio.h>

void main()
{
    char s1[10],temp;
    printf("enter the string\n");
    scanf("%s",s1);
    int len,i,j;
    for(len=0;s1[len];len++);
    for(i=0,j=len-1;i<j;i++,j--)
    {
        temp=s1[i];
        s1[i]=s1[j];
        s1[j]=temp;
    }
    printf("reversed string is %s",s1);
}