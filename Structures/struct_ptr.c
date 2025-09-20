#include<stdio.h>

struct student1
{
    int rno;
    char gender;
    char major;
};


struct student2
{
    int rno;
    char gender;
    char major;
};

void main()
{
    struct student1 s1,*ptr1;
    struct student2 s2,*ptr2;
    ptr1=&s1;
    ptr2=&s2;

    ptr1->rno=36;
    ptr1->gender='M';
    ptr1->major='Y';

    printf("%d\n",ptr1->rno);
    printf("%c\n",s1.gender);
    printf("%c\n",ptr1->major);
}