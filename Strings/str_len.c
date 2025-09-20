#include<stdio.h>

void main()
{
    int len;
    char str1[10]; 
    printf("enter the string\n");
    //scanf("%s",str1);
    scanf("%[^\n]",str1); //incase if we provide the string contain spaces we can use this format specifier
    for(len=0;str1[len];len++); //checking till null character occurance

    printf("length is %d\n",len);  // Null character wont count in length
    printf("size is %d",sizeof(str1)); // Null character will be counted in size as 1 byte

}