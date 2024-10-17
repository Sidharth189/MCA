#include<stdio.h>
#include<stdlib.h>

struct stack{
    int data;
    struct stack *link; 
}*top=NULL;

void push(int d)
{
    struct stack *temp=malloc(sizeof(struct stack));
    temp->data=d;
    temp->link=top;
    top=temp;
}

void pop()
{
    if(top==NULL)
    {
        printf("\n Stack Empty !!");
        return;
    }
    struct stack *temp;
    temp=top;
    top=top->link;
    free(temp);
}

void display()
{
    struct stack *q=top;
    printf("Stack: ");
    while(q!=NULL)
    {
        printf("%d ",q->data);
        q=q->link;
    }
}
void main()
{
    int ch,data;
    do{
        printf("\n1.PUSH\t\t2.POP\t\t3.Display\t\t0.Exit");
        printf("\n Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("\n Enter the data: ");
                scanf("%d",&data);
                push(data);
                break;
            
            case 2:pop();
                break;

            case 3:display();
                break;

            default:printf("\n Wrong choice !!");
        }
    }while(ch!=0);

    struct stack *temp;
    while(temp!=NULL)
    {
        temp=top;
        top=top->link;
        free(temp);
    }
    free(temp);

}