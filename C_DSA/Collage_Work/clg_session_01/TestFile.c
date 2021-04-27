#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int info;
    struct node *next;
}node;

node del_1st(node *head)
{
    if (head==NULL)
    {
        printf("\nempty!");
        return *head;
    }
    else
    {
        node *temp=head;
        head=head->next;
        printf("\ndeleted itm %d",temp->info);
        temp->next=NULL;
        free(temp);
        return *head;
    }
}

node del_last(node *head)
{
    if (head==NULL)
    {
        printf("\nempty!");
        return *head;
    }
    else
    {
        node *temp=head,*ptr;
        while(temp->next!=NULL)
        {
            ptr=temp;
            temp=temp->next;
        }
        printf("\ndel itm:%d",temp->info);
        ptr->next=NULL;
        free(temp);
        return *head;
    }
}

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

node *count(node *head)
{
    node *temp=head;
    int count=1;
    while(temp->next!=NULL)
    {
        count++;
        temp=temp->next;
    }
    printf("\nno of elmt is : %d",count);
}
void traverse(node *head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->info);
        temp=temp->next;
    }
    //return 0;
}
int main()
{
    node *head = NULL;
    int ch,n;
    while(1)
    {
        printf("\nenter ur choice:\n1.create\n2.delt_beg\n3.delt end\n4.traverse\n5.count\n6.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("\nEntr the no. of node: ");
                    scanf("%d",&n);
                    head=create(head,n);
                    break;
            case 2: *head=del_1st(head);
                    break;
            case 3: *head=del_last(head);
                    break;
            case 4: traverse(head);
                    break;
            case 5: count(head);
                    break;
            case 6: exit(0);
            default:printf("\nwrong\n");
        }

    }
}

