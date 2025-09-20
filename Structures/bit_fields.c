#include<stdio.h>

struct student 
{
    int rno : 4;  //, you can allocate memory in bits (instead of whole bytes) using bitfields.

};

void main()
{
    struct student s1;
    s1.rno=2;
    printf("%d\n",s1.rno);
    s1.rno=16;
    printf("%d\n",s1.rno);
}