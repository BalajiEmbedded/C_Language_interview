#include<stdio.h>
#include<string.h>

void main()
{
    char s1[10],s2[10],temp;
    printf("enter the string\n");
    scanf("%s",s1);
     strcpy(s2,s1);
    int len,i,j;
    for(len=0;s1[len];len++);
    for(int i=0,j=len-1;i<j;i++,j--)
    {
        temp=s1[i];
        s1[i]=s1[j];
        s1[j]=temp;
    }

    if(strcmp(s1,s2))
    {
        printf("it is not a palindrome\n");
    }
    else
    {
        printf("it is a palindrome\n");
    }


}