// this code is to insert a new node in the beginning 

#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
int roll;
char name[20];
float marks;
struct student *next;
}sll;

void add_node(sll **);
void print_data(sll *);


void main()
{
    sll *headptr=0;
    int choice;
    while(1)
    {
    printf("enter the choice\n");
    printf("1) add node 14)print data 15)exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            add_node(&headptr);
            break;
        case 14:
            print_data(headptr);
            break;

        case 15:
                exit(0);
                break;
        default:
            printf("Please enter valid data\n");

    }
}

}

void add_node(sll **ptr)
{
    sll *new;
    new=(sll *)malloc(sizeof(sll));
    printf("enter the roll name marks\n");
    scanf("%d %s %f",&new->roll,new->name,&new->marks);
    new->next=*ptr;
    *ptr=new; 

}


void print_data(sll *ptr)
{
while(ptr)
{
    printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
    ptr=ptr->next;
}
}


