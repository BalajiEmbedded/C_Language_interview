#include<stdio.h>

void main()
{
    char s1[10],ch;
    int i;
    printf("enter the string\n");
    scanf("%s",s1);
    printf("enter the character\n");
    scanf(" %c",&ch);
    for(i=0;s1[i];i++)
    {
        if(s1[i]==ch)
        {
            printf("first occurance is at %d",i);
            break;
        }
    }
}