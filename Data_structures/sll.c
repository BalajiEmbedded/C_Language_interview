#include<stdio.h>
#include<stdlib.h>

typedef struct student 
{
    char name[10];
    int roll;
    float marks;
    struct student *next;
}sll;


void print_data(sll *);
void insert_node_begin(sll **);
void insert_node_end(sll **);
void delete_node_begin(sll **);
void delete_node_end(sll **);
void reverse_list(sll **);


void main()
{
    sll *headptr=0;
    
    int choice;
    
    while(1)
    {
        printf("enter your choice\n");
        printf("1) print the data\n");
        printf("2) insert the node at the beginning\n");
        printf("3) insert the node at the end\n");
        printf("4)delete node at beginning\n");
        printf("5)delete node at the end\n");
        printf("6)reverse the linked list\n");
        printf("7) exit the current loop\n");
        
        scanf("%d",&choice);
        
        switch (choice)
        {
         case 1:
                print_data(headptr);
                break;
         case 2:
                insert_node_begin(&headptr);
                break;
         case 3:
                insert_node_end(&headptr);
                break;
         case 4:
                delete_node_begin(&headptr);
                break;
                
         case 5:
                delete_node_end(&headptr);
                break;
         case 6:
                reverse_list(&headptr);
                break;
         case 7:
                exit(0);
                break;
         default:
                printf("enter valid data\n");
                
    }
}
}


void print_data(sll *ptr)
{
    if(ptr == NULL)
    {
        printf("there is nothing to print\n");
    }
    while(ptr)
    {
        printf("----------------------------------------------\n");
        printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
        printf("----------------------------------------------\n");
        ptr=ptr->next;
    }
}


void insert_node_begin(sll **ptr)
{
    sll *new;
    new=(sll *)malloc(sizeof(sll));
    printf("enter the student data name,roll,marks\n");
    scanf("%s %d %f",new->name,&new->roll,&new->marks);
    new->next=*ptr;
    *ptr=new;
}

void insert_node_end(sll **ptr)
{
    sll *new,*temp;
    new=(sll *)malloc(sizeof(sll));
    printf("enter the student data name,roll,marks\n");
    scanf("%s %d %f",new->name,&new->roll,&new->marks);
    new->next=NULL;
    
    if (*ptr == NULL)          
    {
        *ptr = new;
        return;
    }
    
    temp = *ptr;
    while(temp->next !=NULL)
    {
     temp=temp->next;   
    }
    temp->next=new;
}

void delete_node_begin(sll **ptr)
{
    sll *temp;
    temp=*ptr;
    (*ptr)=(*ptr)->next;
    free(temp);
}

void delete_node_end(sll **ptr)
{
    sll *prev,*temp;
    temp=*ptr;
    prev=NULL;
    if((*ptr)->next == NULL)
    {
        free(*ptr);
        *ptr=NULL;
    }
    
    while(temp->next != NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    
    prev->next=NULL;
    free(temp);
    
}


void reverse_list(sll **ptr)
{
    sll *prev,*curr,*next;
    prev=NULL;
    curr=*ptr;
    next=NULL;
    
    while(curr != NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    
    *ptr=prev;
    
}





