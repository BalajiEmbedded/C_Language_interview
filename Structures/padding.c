#include<stdio.h>

struct student1
{
    int rno;
    char gender;
    char major;
};


struct student2
{
    char gender;
    int rno;
    char major;
};

void main()
{
    struct student1 s1={36,'m','y'}; // 
    struct student2 s2={'F',45,'y'}; // compiler will add an extra bites to align with the memory and reduce no of cpu cycles while reading it
    printf("%d\n",sizeof(s1));
    printf("%d\n",sizeof(s2));
}