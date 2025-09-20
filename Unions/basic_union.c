#include<stdio.h>
#include<string.h>

union student 
{
    int rno;
    char name[20];
    float marks;
};

void main()
{
    union student u1;

    u1.rno=36;
    strcpy(u1.name,"balaji");
    u1.marks=99.5;
    printf("%d\n",u1.rno);
    printf("%s\n",u1.name);
    printf("%f\n",99.5);  // only one element can access at a time 
    printf("%d\n",sizeof(u1));  // maxium member size is the size of union

}