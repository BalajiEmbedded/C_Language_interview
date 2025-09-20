#include<stdio.h>

void main()
{
    char s1[10],s2[10],ch1,ch2;
    int i,j;
    printf("enter the string\n");
    scanf("%s",s1);
    printf("enter the characterto be replaced\n");
    scanf(" %c",&ch1);
    printf("enter the character to be replace with\n");
    scanf(" %c",&ch2);
    for(i=0;s1[i];i++)
    {
        if (s1[i]==ch1)
        {
            s1[i]=ch2;
        }
    }
printf("replaced string is %s",s1);

}