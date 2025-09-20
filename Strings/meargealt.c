#include<stdio.h>

void main()
{
    char s1[10],s2[10],s3[20];
    int l1,l2,loop,i,j;
    printf("enter the string1\n");
    scanf("%s",s1);
    printf("enter the string2\n");
    scanf("%s",s2);
    for(l1=0;s1[l1];l1++);
    for(l2=0;s2[l2];l2++);
    if(l1>l2)
    {
        loop =l2;
    }
    else
    {
        loop=l1;
    }

    for(i=0,j=0;i<loop;i++)
    {
        s3[j++]=s1[i];
        s3[j++]=s2[i];
    }

    if(l1>l2)
    {
        for(;j<l1+l2;)
        {
            s3[j++]=s1[i++];
        }
    }
    else{
        for(;j<l1+l2;)
        {
            s3[j++]=s2[i++];
        }

    }
    s3[j++]='\0';

printf("%s",s3);


}