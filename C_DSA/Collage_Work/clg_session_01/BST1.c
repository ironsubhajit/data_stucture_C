/*

Write a program to implement the following:
1.insert
2.traverse using:
pre ;post; in order

*/
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int key;
    struct node *left, *right;
}node;

struct node *newNode(int item)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->key= item;
    temp->left=temp->right=NULL;
    return temp;
};

struct node *insert(struct node *node,int key)
{
    if (node==NULL)
        return newNode(key);
    else if(key<node->key)
        node->left=insert(node->left,key);
    else if(key>node->key)
    {
        node->right=insert(node->right,key);
    }
    else
        printf("\nAlready in Tree! Can't Inserted!\n");
    return node;
};

void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d \t",root->key);
        inorder(root->right);
    }
}

void postorder(struct node *root)
{
    if (root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d \t",root->key);
    }
}

void preorder(struct node *root)
{
    if (root!=NULL)
    {
        printf("%d \t",root->key);
        preorder(root->left);
        preorder(root->right);
    }
}

int main()
{
    int ch,item;
    struct node *root=NULL;
    while(1)
    {
        printf("\nEnter your choice:\n1.insert tree element.\n2.print inorder.\n3.print postorder.\n4.print preorder.\n5.exit program.\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("\nEnter the item:\n");
                    scanf("%d",&item);
                    root=insert(root,item);
                    break;
            case 2: inorder(root);
                    break;
            case 3: postorder(root);
                    break;
            case 4: preorder(root);
                    break;
            case 5: exit(1);
        }
    }
}
