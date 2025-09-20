#include<stdio.h>

void main()
{
    char s1[20],c;
    int i,count=0;
    printf("enter the string\n");
    scanf("%s",s1);
    printf("enter the character to be searched\n");
    scanf(" %c",&c);
    for(i=0;s1[i];i++)
    {
        if(s1[i]==c)
        {
            count+=1;
        }
    }
    printf("%d times the character is present\n",count);

}