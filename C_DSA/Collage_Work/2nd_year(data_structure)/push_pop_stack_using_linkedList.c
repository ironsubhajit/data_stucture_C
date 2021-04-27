/*
@ironsubhajit
Subject: Stack operations using LINKED LIST.
*/

#include<stdio.h>
#include<stdlib.h>

struct node *push(struct node *);
struct node *pop(struct node *);
void dis(struct node *);

typedef struct node
{
    int info;
    struct node *next;
}node;

void main()
{
    struct node *head=NULL;
    int ch,n;
    while(1)
    {
        printf("\nEnter your choice:\n1.insert an element to the stack.\n2.delete element from the stack.\n3.PRINT Stack.\npress 4 for exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: head=push(head);
                    break;
            case 2: head=pop(head);
                    break;
            case 3: dis(head);
                    break;
            case 4: exit(0);
            default: printf("\nWRONG CHOICE.\n");
        }
    }
}
struct node *push(struct node *head)
{
    node *newnode,*temp=head;
    newnode=(node *)malloc(sizeof(node));
    printf("\nEnter the Element to be inserted:\n");
    scanf("%d",&newnode->info);
    newnode->next=head;
    head=newnode;
/*    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=newnode;*/
 //   newnode->next=NULL;
    return(head);
};

struct node *pop(struct node *head)
{
    //int item;
    struct node *temp,*ptr;
    temp=head;
    if(head==NULL)
        printf("\nStack is underflow\n");
    else
    {
        //item=head->info;
        printf("\nDeleted element is: %d",head->info);
        head=head->next;
        temp->next=NULL;
        free(temp);
    }
    return(head);
/*    while(temp->next!=NULL)
    {
        ptr=temp;
        temp=temp->next;
    }
    ptr->next=NULL;
    printf("\nDeleted element is: %d",temp->info);
    free(temp);
    return(head);*/
};

void dis(struct node *head)
{
    node *i=head;
    if (i==NULL)
        printf("\nStack is empty.\n");
    else
    {
        for (i=head;i!=NULL;i=i->next)
        {
            printf("%d\n",i->info);
        }
    }
}
