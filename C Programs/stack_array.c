#include<stdio.h>
#include<stdlib.h>

int top=-1;

void push(int *stack,int s,int d)
{
    if(top==(s-1))
    {
        printf("\n Stack oveflow !!");
    }
    else{
        top++;
        stack[top]=d;
    }
    printf("\n Pushed !!");
}

void display(int *stack)
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d ",stack[i]);
    }
}

void pop()
{
    if(top==-1)
    {
        printf("\n Stack underflow!!");
    }
    else{
        top--;
    }
    printf("\n Popped !!");
}
void main()
{
    int size,*stack,ch,data;
    printf("\n Enter the size of the array: ");
    scanf("%d",&size);
    stack=(int*)malloc(size*sizeof(int));
    do{
        printf("\n1.PUSH\t\t2.POP\t\t3.Display");
        printf("\n Enter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("\n Enter the data: ");
                scanf("%d",&data);
                push(stack,size,data);
                break;
            
            case 2:pop(stack);
                break;

            case 3:display(stack);
                break;

            default:printf("\n Wrong choice !!");
        }
    }while(ch!=0);

    free(stack);
}