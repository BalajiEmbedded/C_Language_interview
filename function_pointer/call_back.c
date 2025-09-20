#include<stdio.h>

void sum(int,int);
void sub(int,int);
void display(void (*fptr)(int,int),int,int);

void main()
{
int a,b;
printf("enter the numbers\n");
scanf("%d %d",&a,&b);
display(sum,a,b);
display(sub,a,b);

}

void display(void (*fptr)(int ,int),int a,int b)
{

    (*fptr)(a,b);


}

void sum(int a,int b)
{
    printf("sum is %d\n",a+b);
}

void sub(int a,int b)
{
    printf("sub is %d\n",a-b);
}