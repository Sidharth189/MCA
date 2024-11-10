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
            rear++;
            queue[rear]=temp;
            break;
        }
        else if(q->right==NULL)
        {
            q->right=temp;
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
    front=-1;
    int f=0;
    while(front<=rear)
    {
        front++;
        if(queue[front]->data==key)
        {
            queue[front]=queue[rear];
            rear--;
            break;
            f++;
        }
    }
    if(f>0)
    {
        printf("\n value not in tree !!");
    }
    printf("\n Deleted !!");
}

void pre_order(struct node* root)
{
    if(root==NULL)
    {
        return;
    }
    printf("%d->",root->data);
    pre_order(root->left);
    pre_order(root->right);
    return;
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

void post_order(struct node* root)
{
    if(root==NULL)
    {
        return;
    }
    post_order(root->left);
    post_order(root->right);
    printf("%d->",root->data);
}

void main()
{
    int ch;
    struct node* root=NULL;
    do{
        printf("\n1.Insertion\t\t2.Deletion\t\t3.Level order traversal\t\t4.Pre-order traversal\n5.In-order traversal\t\t6.Post-order traveral\t\t0.Exit");
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

            case 4:printf("\n Pre-order: ");
                pre_order(root);
                break;
            
            case 5:printf("\n In-order: ");
                in_order(root);
                break;

            case 6:printf("\n Post-order: ");
                post_order(root);
                break;

            case 0:exit(0);

            default:printf("\n Invalid choice !!");
        }    
    }while(ch!=0);
}