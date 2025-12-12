//macro is the preprocessor directive so handeled by preprocessor before the compiler sees your code
//Anything defined using #define is replaced textually.
//Useful when you want constants without using variables.
//Why use macro instead of variable?
//Because macro has zero runtime cost — replaced at compile time.

#include<stdio.h>
#define pi 3.14  // macro for constant
void main()
{
    int r;
    float area;
    printf("enter the radius\n");
    scanf("%d",&r);
    area= pi*r*r;
   printf("area is %.2f",area);
}