#include<stdio.h>

void main()
{
    int len,i,j;
    char s1[10],s2[10];
    printf("enter the string\n");
    scanf("%s",s1);
    for(len=0;s1[len];len++);
 // printf("length is %d\n",len);
    for(i=0,j=len-1;s1[i];i++,j--)
    {
        s2[i]=s1[j];
    }
    s2[i]='\0';
    printf("%s\n",s2);
}