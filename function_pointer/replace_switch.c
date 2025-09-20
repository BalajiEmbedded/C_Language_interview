#include<stdio.h>

void sum(int a,int b)
{
    printf("%d\n",a+b);
}
void sub(int a,int b)
{
    printf("%d\n",a-b);
}
void mul(int a,int b)
{
    printf("%d\n",a*b);
}
void div(int a,int b)
{
    printf("%d\n",a/b);
}

void main()
{
    int ch,a,b;
    printf("enter the numbers\n");
    scanf("%d %d",&a,&b);
    printf("enter 0-add,1-sub,2-mul,4-div\n");
    scanf("%d",&ch);
    void (*fptr[10])(int,int)={sum,sub,mul,div};

    (fptr[ch])(a,b);


}