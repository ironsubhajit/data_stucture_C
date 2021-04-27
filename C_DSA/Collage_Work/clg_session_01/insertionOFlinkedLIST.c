#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int info;
    struct node *next;
}node;

node *create(node *head,int n)
{
    int i;
    node *newnode,*temp;
    for (i=0;i<n;i++)
    {
        newnode=(node *)malloc(sizeof(node));
        printf("\nEnter the item: ");
        scanf("%d",&newnode->info);
        newnode->next=NULL;
        if (head==NULL)
            head=newnode;
        else
            temp->next=newnode;
        temp=newnode;
    }
    return head;
}

node *insert_begin(node *head)
{
    node *newnode;
    newnode=(node *)malloc(sizeof(node));
    printf("\nenter the item: ");
    scanf("%d",&newnode->info);
    newnode->next=head;
    head=newnode;
    return head;
}

node *insert_end(node *head)
{
    node *newnode,*temp=head;
    newnode=(node *)malloc(sizeof(node));
    printf("\nenter the item: ");
    scanf("%d",&newnode->info);
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=newnode;
    newnode->next=NULL;
    return head;
}

void traverse(node *head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->info);
        temp=temp->next;
    }
    return 0;
}

int main()
{
    node *head = NULL;
    int ch,n;
    while(1)
    {
        printf("\nenter ur choice:\n1.create\n2.insert_beg\n3.insert end\n4.traverse\n5.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("\nEntr the no. of node: ");
                    scanf("%d",&n);
                    head=create(head,n);
                    break;
            case 2: head=insert_begin(head);
                    break;
            case 3: head=insert_end(head);
                    break;
            case 4: traverse(head);
                    break;
            case 5: exit(0);
            default:printf("\nwrong\n");
        }

    }
}
