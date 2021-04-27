/*
@ironsubhajit
subject: C_program to implementation of stack using linked list
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    struct node *next;
    int info;
}node;


node *push(int,node *);
node *pop(node *);
void display(node *);

int main()
{
    int ch,item;
    node *top=NULL;
    while(1)
    {
        printf("\nEnter the choice :\n1.Push\n2.POP\n3.display\n4.exit\n\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("\nEnter the new item\n");
                    scanf("%d",&item);
                    top=push(item,top);
                    printf("\nNow the top element is %d\n",top->info);
                    break;
            case 2: top=pop(top);
                    break;
            case 3: display(top);
                    break;
            case 4: exit(0);
            default: printf("\nWrong Choice\n");
        }
    }
}

//function to push element on a stack
node *push(int item,node *top)
{
    node *q;
    q=(node *)malloc(sizeof(node));
    q->info=item;
    q->next=top;
    top=q;
    return(top);
}

//Function to pop out element from stack
node *pop(node *top)
{
    if (top==NULL)
        printf("\nStack is Underflow\n");
    else
    {
        node *q=top;
        printf("\ndeleted element is %d\n",q->info);
        top=top->next;
        free(q);
    }
    return(top);
};

//function to display the stack
void display(node *top)
{
    if (top==NULL)
        printf("\nStack is empty.\n");
    else
    {
        printf("\nstack is =>\n");
        while(top!=NULL)
        {
            printf("%d\n",top->info);
            top=top->next;
        }
    }
}
