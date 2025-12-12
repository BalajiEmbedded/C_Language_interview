//Converts argument into a string literal. 
// Stringizing Operator #
// You can dynamically print variable names while debugging.

#include<stdio.h>

#define print_var(x) printf(#x "=%d",x)

void main()
{
int a;
printf("enter the value of a\n");
scanf("%d",&a);
print_var(a);
}