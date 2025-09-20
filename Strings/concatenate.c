#include<stdio.h>

void main()
{
    char s1[20],s2[20];
    int i,j,len;
    printf("enter the string1\n");
    scanf("%s",s1);
    printf("enter the string2\n");
    scanf("%s",s2);
    for(len=0;s1[len];len++);
    for(i=0;s2[i];i++,len++)
    {
        s1[len]=s2[i];
    }
    s1[len]='\0';

    printf("%s",s1);

}