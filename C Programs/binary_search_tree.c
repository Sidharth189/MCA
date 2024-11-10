#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

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
    printf("%d->",root->data);
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
    printf("%d->",root->data);
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

struct node* find_inorder_successor(struct node* q)
{
    while(q!=NULL && q->left!=NULL)
    {
        q=q->left;
    }
    return q;
}

void delete(struct node** root,int key)
{
    struct node* q=*root,*temp,*before=NULL;

    if(*root==NULL)
    {
        printf("\n Empty tree !!");
        return;
    }
            //traversal upto node
    while(q!=NULL && q->data!=key)
    {
        before=q;
        if(key<q->data)
        {   
            q=q->left;
        }
        else
        {
            q=q->right;
        }
    }
        //if no child
    if(q->left==NULL && q->right==NULL)
    {
        if(before==NULL)
        {
            free(q);
            *root=NULL;
        }
        else if(before->left ==q)
        {
            before->left=NULL;
            free(q);
        }
        else{
            before->right=NULL;
            free(q);
        }
    }
        //one child
    else if(q->left==NULL)
    {
        if(before==NULL)
        {
            *root=q->right;
        }
        before=q->right;
        free(q);
    }
    else if(q->right==NULL)
    {
        if(before==NULL)
        {
            *root=q->left;
        }
        before=q->left;
        free(q);
    }
    else{
        temp=find_inorder_successor(q->right);
        q->data=temp->data;
        delete(&(q->right),temp->data);
    }    
}

void search(struct node* root,int key)
{
    struct node* q=root;
    if(root==NULL)
    {
        printf("Empty tree !!");
        return;
    }
    while(q!=NULL)
    {
        if(q->data==key)
        {
            printf("\n Search successfull");
            printf("\n %d found !!",q->data);
            return;
        }
        else if(q->data<key)
        {
            q=q->right;
        }
        else{
            q=q->left;
        }
    }

    if(q==NULL)
    {
        printf("\n Key not found !!");
    }

}

void main()
{
    int ch,key;
    struct node* root=NULL;
    do{
        printf("\n1.Insertion\t\t2.Deletion\t\t3.In-order\n4.Pre-order\t\t5.Post-order\t\t6.Search\t\t0.Exit");
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
                delete(&root,key);
                printf("\n Deleted !!");
                break;

            case 3:in_order(root);
                break;

            case 4:pre_order(root);
                break;

            case 5:post_order(root);
                break;

            case 6:printf("Enter the data to be searched: ");
                scanf("%d",&key);
                search(root,key);
                break;

            case 0:exit(0);break;

            default:printf("\n Invalid choice !!");
        }
    }while(ch!=0);
}