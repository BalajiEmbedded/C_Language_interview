#include<stdio.h>

struct student
{
    int rno;
    char name[20];
    float marks;
};
void main()
{
    struct student s1={.name="balaji",.rno=36,.marks=99.9};

    printf("%s\n",s1.name);
    printf("%d\n",s1.rno);
    printf("%f\n",s1.marks);
}