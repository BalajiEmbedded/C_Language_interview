#include<stdio.h>

struct people
{
    char name[20];
    int age;
};

struct student
{
    int dob;
    float marks;
    char gender;
    struct people s2;
};

void main()
{
    struct student s1={9,99,'m',"balaji",36};
    struct people s3;
    
    printf("%f\n",s1.marks);
    printf("%s\n",s1.s2.name);

    s1.s2.age=45;

    printf("%d\n",s1.s2.age);
    

}