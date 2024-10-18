#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *right;
	struct node *left;
}*head=NULL;

void insertion_end(int data)
{
	struct node *temp=malloc(sizeof(struct node)),*ptr;
	temp->data=data;
	temp->right=NULL;
	if(head==NULL)
	{
		head=temp;
		temp->left=NULL;
	}
	else{
		ptr=head;
		while(ptr->right!=NULL)
		{
			ptr=ptr->right;
		}
		ptr->right=temp;
		temp->left=ptr;
	}
	printf("\n Inserted !!");
}

void insertion_beginning(int data)
{
	struct node*temp=malloc(sizeof(struct node)),*ptr;
	temp->data=data;
	temp->left=NULL;
	if(head==NULL)
	{
		head=temp;
		temp->right=NULL;
	}
	ptr=head;
	head=temp;
	ptr->left=temp;
	temp->right=ptr;
}
		
void forward_traverse()
{
	struct node *ptr;
	ptr=head;
	printf("\n Forward display : ");
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->right;
	}
}
	
void backward_traverse()
{
	struct node *ptr;
	ptr=head;
	printf("\n Backward display: ");
	while(ptr->right!=NULL)
	{
		ptr=ptr->right;
	}
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->left;
	}
}
			
		
void main()
{
	int ch,data;
	do{
		printf("\n1.Insertion at end\t\t2.Insertion at beginning\t\t3.Forward traversal\t\t4.Backward traversal\t\t0.Exit");
		printf("\n Enter the option: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("\n Enter the data: ");
				scanf("%d",&data);
				insertion_end(data);
				break;
				
			case 2:printf("\n Enter the data: ");
				scanf("%d",&data);
				insertion_beginning(data);
				break;
				
			case 3:forward_traverse();
				break;
				
			case 4:backward_traverse();
				break;
			
			case 0:exit(0);
				break;
			
			default: printf("\n Wrong option !!");
			
		}
	}while(ch!=0);
}
