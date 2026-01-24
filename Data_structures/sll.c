#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
    int rno;
    char name[10];
    float marks;
    struct student *next;
    
}sll;

void print_data(sll *ptr);
void insert_at_begin(sll **ptr);
void insert_at_end(sll **ptr);

void main()
{
    sll *headptr=0;
    int choice;
    
    while(1)
    {
        printf("enter the choice\n");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:
                  insert_at_begin(&headptr);
                  break;
            case 2:
                    print_data(headptr);
                    break;
            case 3:
                    insert_at_end(&headptr);
                    break;
            case 4:
                    exit(0);
                    break;
            default:
                    printf("enter valid choice\n");
        }
    }
    
}



void print_data(sll *ptr)
{
    while(ptr)
    {
    printf("%d %s %f\n",ptr->rno,ptr->name,ptr->marks);
    ptr=ptr->next;
    }
    
}


void insert_at_begin(sll **ptr)
{
    sll *new;
    new=(sll *)malloc(sizeof(sll));
    printf("enter the roll,name,marks\n");
    scanf("%d %s %f",&new->rno,new->name,&new->marks);
    new->next=*ptr;
    *ptr=new;
    
}


void insert_at_end(sll **ptr)
{
    sll *new,*temp;
    new=(sll *)malloc(sizeof(sll));
    printf("enter the roll,name,marks\n");
    scanf("%d %s %f",&new->rno,new->name,&new->marks);
    new->next =NULL;
    
    if(*ptr==0)
    {
        *ptr=new;
    }
    temp = *ptr;
    
    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    
    temp->next=new;
}


