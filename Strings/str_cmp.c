#include<stdio.h>

void main()
{
    char s1[10],s2[10];
    int len1,len2,i;
    printf("enter the string1\n");
    scanf("%s",s1);
    printf("enter the string2\n");
    scanf("%s",s2);
    for(len1=0;s1[len1];len1++);
    for(len2=0;s2[len2];len2++);

    if(len1==len2)
    {
        for(i=0;s1[i];i++)
        {
            if (s1[i] != s2[i])
            {
                break;
            }
        }

        if(i==len1)
        {
            printf("strings are equal\n");
        }
        else
        {
            printf("strings are not equal\n");
        }

    }
    else
    {
        printf("string lengths are not equal\n");
    }
}