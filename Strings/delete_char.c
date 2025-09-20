#include<stdio.h>

void main()
{
    char s1[10],ch;
    int i,j;
    printf("enter the string\n");
    scanf("%s",s1);
    printf("enter the character to be deleted\n");
    scanf(" %c",&ch);
    for(i=0;s1[i];i++)
    {
        if(s1[i]==ch)
        {
            for(j=i;s1[j];j++)
            {
                s1[j]=s1[j+1];
            }
                   i=i-1;
        }
 
    }
printf("after deleting %s",s1);


}