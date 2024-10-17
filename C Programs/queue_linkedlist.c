#include<stdio.h>
#include<stdlib.h>

struct queue{
    int data;
    struct queue *link;
}*front=NULL,*rear=NULL;

void enqueue(int d)
{
    struct queue *temp=malloc(sizeof(struct queue));
    temp->data=d;
    if(front==NULL && rear==NULL)
    {
        front=temp;
        rear=temp;
        temp->link=NULL;
    }
    else{
        temp->link=rear->link;
        rear->link=temp;
        rear=rear->link;
    }
}

void dequeue()
{
    struct queue *temp;
    if(front==NULL)
    {
        printf("\n Empty Queue !!");
    }
    else{
        temp=front;
        front=front->link;
        free(temp);
    }
}

void display()
{
    struct queue *q=front;
    printf("\n Queue: ");
    while(q!=NULL)
    {
        printf("%d ",q->data);
        q=q->link;
    }
}

void main()
{
    int ch,data;
    do
    {
        printf("\n1.Enqueue\t\t2.Dequeue\t\t3.Display\t\t0.Exit");
        printf("\n Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("\n Enter the data: ");
                scanf("%d",&data);
                enqueue(data);
                break;
            
            case 2:dequeue();
                break;

            case 3:display();
                break;

            default:printf("\n Wrong choice !!");
        }
    } while(ch!=0);    
}