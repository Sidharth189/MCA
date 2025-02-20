#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* link;
}*head;

struct node* create_node()
{
    int data;
    printf("\n Enter the data: ");
    scanf("%d",&data);
    struct node* temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    return temp;
}

void insertion_begin()
{
    struct node *temp=create_node(),*q=head;
    if(head==NULL)
    {
        head=temp;
        temp->link=head;
    }
    else{
        temp->link=head;
        while(q->link!=head)
        {
            q=q->link;
        }
        head=temp;
        q->link=head;
    }
    printf("\n Inserted !!\n");
}

void insertion_end()
{
    struct node *temp=create_node(),*q=head;
    if(head==NULL)
    {
        head=temp;
        temp->link=head;
    }
    else{
        while(q->link!=head)
        {
            q=q->link;
        }
        q->link=temp;
        temp->link=head;
    }
    printf("\n Inserted !!\n");
}

void insert_pos()
{
    int i=1,pos;
    
    printf("\n Enter the position: ");
    scanf("%d",&pos);

    if(pos==1)
    {
        insertion_begin();
        return;
    }

    struct node *q=head,*before=q,*temp=create_node();
    
    do{
        if(i==pos)
        {
            temp->link=q;
            before->link=temp;
            printf("\n Inserted !!\n");
            return;   
        }
        else{
            i++;
            before=q;
            q=q->link;
        }
    }while(q!=head);

    if(i<pos)
    {
        printf("\n Invalid position !!");
    }
}
void delete_begin()
{
    struct node* q;
    if(head==NULL)
    {
        printf("\n Empty list !!\n");
    }
    else if(head->link==head)
    {
        head=NULL;
        printf("\n Deleted !!\n");
    }
    else{
        q=head;
        while(q->link!=head)
        {
            q=q->link;
        }
        q->link=head->link;
        head=head->link;
        printf("\n Deleted !!\n");
    }
}

void delete_end()
{
    if(head==NULL)
    {
        printf("\n Empty List !!\n");
        return;
    }
    if(head->link==head)
    {
        head=NULL;
        printf("\n Deleted !!\n");
        return;
    }
    struct node*q=head;
    while(q->link->link!=head)
    {
        q=q->link;
    }
    q->link=head;
    printf("\n Deleted !!\n");
}

void delete_pos()
{
    int pos,i=1;
    printf("\n Enter the psoition: ");
    scanf("%d",&pos);

    if(head==NULL)
    {
        printf("\n Empty list !!");
    }

    if(pos==1)
    {
        delete_begin();
        return;
    }

    struct node* q=head,*before=q;
    do{
        if(i==pos)
        {
            before->link=q->link;
            break;
        }
        else{
            before=q;
            q=q->link;
            i++;
        }
    }while(q!=head);
    printf("\n Deleted !!");
}

void display()
{
    struct node*q=head;
    if(head==NULL)
    {
        printf("\n Empty list !!\n");
        return;
    }
    printf("Linked list: ");
    do{
        printf("%d->",q->data);
        q=q->link;
    }while(q!=head);
    printf("head");
}

void main()
{
    int ch;
    do{
        printf("\n1.Insertion by beginning\t\t2.Insertion at end\t\t3.Insertion at position\n4.Deletion at beginning\t\t5.Deletion at end\t\t6.Deletion at position\n7.Display");
        printf("\nEnter the choice: ");
        scanf("%d",&ch);
        
        switch(ch)
        {
            case 1:insertion_begin();
                break;
                
            case 2:insertion_end();
                break;
            
            case 3:insert_pos();
                break;
            
            case 4:delete_begin();
                break;
            
            case 5:delete_end();
                break;
            
            case 6:delete_pos();
                break;
            
            case 7:display();
                break;
                
            case 0:exit(0);
                break;
        }
    }while(ch!=0);
}
