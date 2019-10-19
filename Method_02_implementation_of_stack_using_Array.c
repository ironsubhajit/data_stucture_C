/*
@ironsubhajit
Subject: Stack operations using ARRAY.
1.push elements in the stack.
2.pop elements from the stack.
3.print the stack top element.

*/

#include<stdio.h>
#include<stdlib.h>
#define stackmax 5
int top=-1;
int a[stackmax];

//Function to push elements into the stack.
void push()
{
    int item;
    if(top==stackmax-1)
    {
        printf("\nstack is overflow\n");
    }
    else
    {
        printf("\nEnter the item:\n");
        scanf("%d",&item);
        top++;
        a[top]=item;
    }
}

//Function to pop elements from the stack.
void pop()
{
    int del;
    if (top==-1)
        printf("\nStack is underflow\n");
    else
    {
        del=a[top];
        printf("\nDeleted item is %d\n",del);
        top--;
    }
}

//Function to print the stack.
void display()
{
    int i=top;
    if(i==-1)
        printf("\nStack is Empty\n");
    else
    {
        for (i=top;i>=0;i--)
            printf("\n%d\n",a[i]);
    }
}

void main()
{
    int ch;
    while(1)
    {
        printf("\nEnter your choice:\n1.Push an Element\n2.POP an element\n3.Display Stack\nPress 0 for Exit.\n");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:push();
                    break;
            case 2:pop();
                    break;
            case 3:display();
                    break;
            case 0:exit(0);
            default : printf("\nWRONG CHOICE!\n");
        }
    }
}
