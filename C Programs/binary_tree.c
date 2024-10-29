#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node* right;
};

struct node* create_node()
{
    int data;
    printf("\n Enter the data: ");
    scanf("%d",&data);
    struct node*temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

void insert(struct node **root)
{
    struct node *temp=create_node(data);
    if(*root==NULL)
    {
        *root=temp;
        return;
    }
    
    struct node **queue=(struct node **)malloc(sizeof(struct node*))=*root;
    int front=-1,rear=-1;
    while(front<rear)
    {

    }
    
}
void main()
{
    struct node* root=malloc(sizeof(struct node));
    insert(&root);
}