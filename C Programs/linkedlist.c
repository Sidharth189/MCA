#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};

void insertion(struct node **start,int d)
{
	struct node *temp,*q;
	q=*start;
	temp=malloc(sizeof(struct node));
	if(temp!=NULL)
	{
		temp->data=d;
		temp->link=NULL;
		if(*start==NULL)
		{
			*start=temp;
		}
		else{
			while(q->link!=NULL)
			{
				q=q->link;
			}
			q->link=temp;
		}
	}
	else{
		printf("Memory allocation failed!!");
	}
}

void display(struct node *start)
{
	struct node *q=start;
	if(start==NULL)
	{
		printf("\n No data");
	}
	else{
		printf("\n Linked list: ");
		while(q!=NULL)
		{
			printf("%d ->",q->data);
			q=q->link;
		}
		printf("NULL");
	}
}

void delete(struct node **start,int k)
{
	struct node *next,*before;
	next=*start;
	if(next==NULL)
	{
		printf("\n Empty List ");
	}
	if(next->data==k)
	{
		*start=next->link;
		printf("\n Deleted !!");
		free(next);
	}
	else{
		while(next!=NULL)
		{
			if(next->data==k)
			{
				before->link=next->link;
				printf("\n Deleted !!");
				free(next);
				break;
			}
			else{
				before=next;
				next=next->link;
			}
		}
	}
}
			
void main()
{
	int ch,data;
	struct node *start,*q;
	start=NULL;
	do{
		printf("\n1.Insertion\t\t2.Display\t\t3.Delete\t\t0.exit");
		printf("\n Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("\n Enter the data :");
				scanf("%d",&data);
				insertion(&start,data);
				break;
		
			case 2:display(start);
				break;
				
			case 3:printf("\n Enter the data to delete: ");
				scanf("%d",&data);
				delete(&start,data);
				break;
		
			default:printf("\n wrong option");
		}
	}while(ch!=0);
	
	q=start;
	while(q!=NULL)
	{
		q=q->link;
		free(q);
	}
	free(start);
}
