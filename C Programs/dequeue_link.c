#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
}*front=NULL,*rear=NULL;

struct node* create_node()
{
    struct node *temp=malloc(sizeof(struct node));
    int data;
    printf("\n Enter the data: ");
    scanf("%d",&data);
    if(temp==NULL)
    {
        printf("\n Memory not allocated !!");
    }
    temp->data=data;
    temp->link=NULL;

    return temp;
}

void insert_front()
{
    struct node* temp=create_node();
    if(front==NULL || rear==NULL)
    {
        front=rear=temp;
    }
    else{
        temp->link=front;
        front=temp;
    }
    printf("\n Inserted !! \n");
}

void insert_rear()
{
    struct node* temp=create_node();
    if(front==NULL && rear==NULL)
    {
        front=rear=temp;
    }
    else{
        rear->link=temp;
        rear=temp;
    }
    printf("\n Inserted !! \n");
}

void delete_front()
{
    if(front==NULL)
    {
        printf("\n Queue empty !!!");
    }
    struct node *q=front;
    front=front->link;
    printf("\n Deleted element %d",q->data);
    free(q);
}

void delete_rear()
{
    struct node* q=front;
    if(rear==NULL)
    {
        printf("\n Queue empty !!");
        return;
    }
    if(front->link==NULL)
    {
        printf("\n Deleted element %d",rear->data);
        free(rear);
        rear=NULL;
        front=NULL;
        return;
    }
    while(q->link->link!=NULL)
    {
        q=q->link;
    }
    q->link=NULL;
    printf("\n Deleted element %d",rear->data);
    free(rear);
    rear=q;
}

void display()
{
    if(front==NULL && rear==NULL)
    {
        printf("\n Queue empty \n");
        return;
    }
    struct node *q=front;
    printf("\n Dequeue: ");
    while(q!=NULL)
    {
        printf("%d ",q->data);
        q=q->link;
    }
}

void main()
{
    int ch;
    do{
        printf("\n1.Insertion at front\t\t2.Insertion at back\n3.Deletion at front\t\t4.Deletion at back\t\t5.Display");
        printf("\n Enter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:insert_front();
                break;

            case 2:insert_rear();
                break;

            case 3:delete_front();
                break;

            case 4:delete_rear();
                break;

            case 5:display();
                break;

            case 0:exit(0);

            default:printf("\n Invalid choice !!");
        }
    }while(ch!=0);
}