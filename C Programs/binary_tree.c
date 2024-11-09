#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* queue[100];
int front=-1,rear=-1;

void insert_node(struct node **root)
{
    front=0;
    int data;
    struct node* temp=malloc(sizeof(struct node));
    struct node*q;
    if(temp==NULL)
    {
        printf("\n Memory allocation failed !!");
        return;
    }
    printf("\n Enter the data: ");
    scanf("%d",&data);
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    if(*root==NULL)
    {
        *root=temp;
        rear++;
        queue[rear]=temp;
        printf("\n Inserted !!");
        return;
    }
    while(front<=rear)
    {
        q=queue[front];
        if(q->left==NULL)
        {
            q->left=temp;
            temp->left=NULL;
            rear++;
            queue[rear]=temp;
            break;
        }
        else if(q->right==NULL)
        {
            q->right=temp;
            temp->left=q;
            rear++;
            queue[rear]=temp;
            break;
        }
        else{
            front++;
        }
    }
    printf("\n Inserted !!");
}

void level_order()
{
    printf("\n Tree: ");
    struct node* q;
    front=0;
    while(front<=rear)
    {
        q=queue[front];
        printf("%d->",q->data);
        front++;
    }
}

void delete()
{
    int key;
    printf("\n Enter the value to delete: ");
    scanf("%d",&key);
    front=0;
    while(front<=rear)
    {
        if(queue[front]->data==key)
        {
            queue[front]=queue[rear];
            rear--;
            break;
        }
        front++;
    }
    if(front>rear)
    {
        printf("\n value not in tree !!");
        return;
    }
    printf("\n Deleted !!");
}

void pre_order()
{
    
}

void main()
{
    int ch;
    struct node* root=NULL;
    do{
        printf("\n1.Insertion\t\t2.Deletion\t\t3.Level order traversal");
        printf("\n Enter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:insert_node(&root);
                break;

            case 2:delete();
                break;

            case 3:level_order();
                break;

            default:printf("\n Invalid choice !!");
        }    
    }while(ch!=0);
}