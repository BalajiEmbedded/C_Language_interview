#include<stdio.h>

void main()
{
    int len;
    char str1[10],str2[10];
    printf("enter the string\n");
    scanf("%s",str1);
    for(len=0;str1[len];len++); //always good practice to find lenght and keep it in variable
    //printf("%d",len);
    for(int i=0;str1[i];i++)
    {
        if(str1[i] >= 'a' && str1[i] <='z')
        {
            str1[i]-=32;
        }
    }
    printf("%s",str1);

}