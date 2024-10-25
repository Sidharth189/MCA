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
	else{
		ptr=head;
		head=temp;
		ptr->left=temp;
		temp->right=ptr;
	}
}

void insertion_pos(int data)
{
	int pos,i=1;
	struct node *q=head;
	printf("\n Enter the position: ");
	scanf("%d",&pos);
	if(pos==1)
	{
		insertion_beginning(data);
	}
	else{
		i++;
		q=q->right;
		while(q!=NULL)
		{
			if(i==pos)
			{
				
			}
		}
	}
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

void delete_begin()
{
	if(head==NULL)
	{
		printf("\n Empty List !!");
		return;
	}
	head->right->left=NULL;
	head=head->right;
	printf("\n Deleted !! \n");
}

void delete_end()
{
	struct node *ptr=head;
	if(head==NULL)
	{
		printf("\n Empty list !!");
		return;
	}
	while(ptr->right->right!=NULL)
	{
		ptr=ptr->right;
	}
	ptr->right=NULL;
	printf("\n Deleted !! \n");
}

void delete_pos()
{
	int i=1,n;
	struct node *ptr=head,*temp=ptr;
	printf("\n Enter the position: ");
	scanf("%d",&n);
	if(n==1)
	{
		delete_begin();
	}
	while(ptr!=NULL)
	{
		if(i==n)
		{
			if(ptr->right==NULL)
			{
				delete_end();
				return;
			}
			temp->right=ptr->right;
			ptr->right->left=ptr->left;
			printf("\n Deleted !!\n");
			return;
		}
		temp=ptr;
		ptr=ptr->right;
		i++;
	}
	if(i<=n)
	{
		printf("\n position out of scope !!");
		forward_traverse();
	}
}
		
void main()
{
	int ch,data;
	do{
		printf("\n1.Insertion at end\t\t2.Insertion at beginning\t\t3.Insertion at a position\n4.Forward traversal\n5.Backward traversal\t\t6.Deletion at beginning\n7.Deletion at the end\t\t8.Deletion at a position\t\t0.Exit");
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

			case 3:printf("\n Enter the data: ");
				scanf("%d",&data);
				insertion_pos(data);
				break;
				
			case 4:forward_traverse();
				break;
				
			case 5:backward_traverse();
				break;

			case 6:delete_begin();
				break;

			case 7:delete_end();
				break;

			case 8:delete_pos();
				break;
			
			case 0:exit(0);
				break;
			
			default: printf("\n Wrong option !!");
			
		}
	}while(ch!=0);
}
