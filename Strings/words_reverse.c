// input is :- balaji mantri from hyd
// outpuut should be :- hyd from mantri balaji

#include<stdio.h>
#include<string.h>

void main()
{
    char str[100],reverse[100];
    int i,word_start,word_end,len,index;
    printf("enter the string in which words to be reversed:\n");
    gets(str);
    len=strlen(str);
    i=0;
    index=0;
    word_start=len-1;
    word_end=len-1;

    while(word_start>0)
    {
        if(str[word_start]==' ')
        {
         i=word_start+1;
         while(i<word_end)
         {
            reverse[index]=str[i];
            i++;
            index++;
         }
         reverse[index++]='\0';
         word_end=word_start-1;

        }

        else
        {
            word_start--;
        }
    }
        for(i=0;i<=word_end;i++)
        {
            reverse[index]=str[i];
            index++;
        }
       reverse[index]='\0';
       printf("original string is %s\n",str);
       printf("reversed is %s\n",reverse);


    }

