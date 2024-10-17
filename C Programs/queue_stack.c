#include<stdio.h>
#include<stdlib.h>

int rear=-1,front=-1;

void enqueue(int *temp,int size)
{
    int d;
    printf("\n Enter the data: ");
    scanf("%d",&d);
    if(front==-1 && rear==-1)
    {
        front++;
        rear++;
        temp[rear]=d;
    }
    else if(front>rear)
    {
        front=0;
        rear=0;
        temp[rear]=d;
    }
    else if(rear==(size-1))
    {
        printf("\n Queue overflow !!");
        return;
    }
    else{
        rear++;
        temp[rear]=d;
    }
    printf("\n Inserted !!");
}

void dequeue(int *temp)
{
    if(front==-1 || front>rear)
    {
        printf("\n Empty Queue !!");
        front=-1;
        rear=-1;
    }
    else{
        front++;
    }
}

void display(int *temp)
{
    int i;
    if(front==-1 || front>rear)
    {
        printf("\n Empty queue !!");
    }
    else{
        printf("\n Queue: ");
        for(i=front;i<=rear;i++)
        {
            printf("%d ",temp[i]);
        }
    }
}

void main()
{
    int ch,size,*temp,data,i;

    printf("\n Enter the size of queue: ");
    scanf("%d",&size);

    temp=malloc(size*sizeof(int));

    do{
        printf("\n1.Enqueue\t\t2.Dequeue\t\t3.Display\t\t0.Exit");
        printf("\n Enter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:enqueue(temp,size);
                break;

            case 2:dequeue(temp);
                break;

            case 3:display(temp);
                break;

            case 0:exit(0);
                break;

            default:printf("\n Wrong choice !!1");
        }
    }while(ch!=0);

    free(temp);
}