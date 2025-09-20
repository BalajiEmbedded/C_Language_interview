#include<stdio.h>
#include<string.h>

struct student 
{
    int rno;
    char gen;
    char major;
    char name[20];
};

void main()
{

struct student s1;

s1.rno=36;
s1.gen='m';
s1.major='y';
strcpy(s1.name,"balaji");

printf("%d\n",s1.rno);
printf("%c\n",s1.gen);
printf("%c\n",s1.major);
printf("%s\n",s1.name);

}