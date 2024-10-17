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
	printf("\n Inserted !!!");
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

void deletepos(struct node **start,int k)
{
	int n=1;
	struct node *next,*before;
	next=*start;
	if(k==1)
	{
		*start=next->link;
	}
	else{
		while(next!=NULL)
		{
			if(n==k)
			{
				before->link=next->link;
				printf("\n Deleted");
				break;
			}
			else{
				before=next;
				next=next->link;
				n++;
			}
		}
	}
}

void search(struct node *start,int k)
{
	struct node *q=start;
	int i=1;
	while(q!=NULL)
	{
		if(q->data==k)
		{
			printf("\nElement found at position %d",i);
			break;
		}
		else{
			i++;
			q=q->link;
		}
	}
}

void reverse(struct node **start)
{
	struct node *before=NULL, *next=NULL,*q=*start;
	while(q!=NULL)
	{
		next=q->link;
		q->link=before;
		before=q;
		q=next;
	}
	*start=before;
	printf("\n Reversed!!");
}

void insertpos(struct node **start,int n,int d)
{
	int i;
	struct node *temp=malloc(sizeof(struct node));
	struct node *q=*start;
	temp->data=d;
	if(n==1)
	{
		temp->link=*start;
		*start=temp;
	}
	else{
		for(i=1;i<n-1;i++)
		{
			q=q->link;
		}
		temp->link=q->link;
		q->link=temp;
	}
	printf("\n Inserted !!!");
}

void evendeletion(struct node **start)
{
	struct node *temp=*start,*previous;
	previous=temp;
	int n=1;
	if(*start==NULL)
	{
		printf("\n Empty list");
		return;
	}
	while(temp!=NULL)
	{
		if(n%2==0)
		{
			previous->link=temp->link;
			previous=temp;
			n++;
			temp=temp->link;
		}
		else{
			n++;
			temp=temp->link;
		}
	}
	printf("\n Deleted !!!");
}

void odd_del(struct node **start)
{
	struct node *temp=*start,*before;
	int n=1;
	before=temp;
	if(*start==NULL)
	{
		printf("\n Empty list !!");
		return;
	}
	while(temp!=NULL)
	{
		if(n==1)
		{
			temp=temp->link;
			free(before);
			*start=temp;
			before=temp;
			n++;
		}
		else if(n%2!=0)
		{
			before->link=temp->link;
			n++;
			before=temp;
			temp=temp->link;
			free(before);
		}
		else{
			temp=temp->link;
			n++;
		}
	}
}
void main()
{
	int ch,data,k;
	struct node *start,*q;
	start=NULL;
	do{
		printf("\n\n1.Insertion\t\t2.Display\t\t3.Delete by value\n4.Delete by position\t\t5.Search\t\t6.Reversal\n7.Insertion at position\t\t8.Even entry deletion\t\t9.Odd entry deletion\t\t0.exit");
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
			
			case 4:printf("\n Enter the position of data to delete: ");
				scanf("%d",&data);
				deletepos(&start,data);
				break;

			case 5:printf("\n Enter the data to search: ");
				scanf("%d",&data);
				search(start,data);
				break;
				
			case 6:reverse(&start);
				break;
				
			case 7:printf("\n Enter the position: ");
				scanf("%d",&k);
				printf("\n Enter the data :");
				scanf("%d",&data);
				insertpos(&start,k,data);
				break;
			
			case 8:evendeletion(&start);
				break;

			case 9:odd_del(&start);
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
