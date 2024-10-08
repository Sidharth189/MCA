#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void insertion(struct node *start)
{
    int num;
    printf("Enter the data: ");
    scanf("%d",&num);
    struct node *temp,*t;
    temp=malloc(sizeof(struct node));
    temp->data=num;
    temp->link=NULL;
    if(start==NULL)
    {
        start=temp;
    }
    else{
        t=start;
        while(t->link!=NULL)
        {
            t=t->link;
        }
        t->link=temp;
    }
}

void display(struct node *start)
{
    struct node *t=start;
    while(t->link!=NULL)
    {
        printf("%d",t->data);
        t=t->link;
    }

}

void main()
{
    struct node *start;
    start=NULL;
    int ch=1;
    do{
        printf("1.Insertion \n2.Deletion \n3.display");
        switch(ch)
        {
            case 1: insertion(start);
                    break;
        
            case 2: break;

            case 3: display(start);
                    break;
        }
    }while(ch!=0);
}