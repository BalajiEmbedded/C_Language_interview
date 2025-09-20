#include<stdio.h>

int add(int a,int b);

void main()
{
    int a,b;
    printf("enter the numbers \n");
    scanf("%d %d",&a,&b);

    int (*fptr)(int,int);
    fptr=&add;
    int res=fptr(a,b);

    printf("%d",res);

}

int add(int a,int b)
{
    return a+b;
}