#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node

struct node* create_node(int data)
{
    struct node* temp=malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("\n Memory allocation failed !!");
    }
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;

    return temp;
}

void insertion(struct node** root,int key)
{
    struct node* temp=create_node(key);
    struct node* current=*root,*before;
    if(*root==NULL)
    {
        *root=temp;
    }
    else{
        while(current!=NULL)
        {
            before=current;
            if(key<=current->data)
            {
                current=current->left;
            }
            else{
                current=current->right;
            }
        }
        if(key<before->data)
        {
            before->left=temp;
        }
        else{
            before->right=temp;
        }
    }
    printf("\n Inserted !!");
}

void pre_order(struct node* root)
{
    if(root==NULL)
    {
        return;
    }
    printf("%d",root->data);
    pre_order(root->left);
    pre_order(root->right);
}

void post_order(struct node* root)
{
    if(root==NULL)
    {
        return;
    }
    post_order(root->left);
    post_order(root->right);
    printf("%d",root->data);
}

void in_order(struct node* root)
{
    if(root==NULL)
    {
        return;
    }
    in_order(root->left);
    printf("%d->",root->data);
    in_order(root->right);

}
struct node in_order_queue(struct node* root)
{

}
void delete()
{
    
}

void main()
{
    int ch,key;
    struct node* root=NULL;
    do{
        printf("\n1.Insertion\t\t2.Deletion\t\t3.In-order\n4.Pre-order\t\t5.Post-order\t\t0.Exit");
        printf("\n Enter  your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:printf("\n Enter the data: ");
                scanf("%d",&key);
                insertion(&root,key);
                break;

            case 2:printf("\nEnter the data to delete: ");
                scanf("%d",&key);
                break;

            case 3:in_order(root);
                break;

            case 4:pre_order(root);
                break;

            case 5:post_order(root);
                break;

            case 0:break;

            default:printf("\n Invalid choice !!");
        }
    }while(ch!=0);
}