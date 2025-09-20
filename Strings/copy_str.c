#include<stdio.h>

void main()
{
    int i;
    char str1[10],str2[10];
    printf("enter the string\n",str1);
    scanf("%s",str1);
    for(i=0;str1[i];i++)
    {
        str2[i]=str1[i];
    }
    str2[i]='\0';
    printf("%s\n",str2);

}