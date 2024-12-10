#include<stdio.h>
#include<stdlib.h>

struct heap{
    int size;
    int array[100];
}*maxheap;

void swap(int a,int b)
{
    int temp;

    temp=maxheap->array[a];
    maxheap->array[a]=maxheap->array[b];
    maxheap->array[b]=temp;
}

void heapify_up(int i)
{
    while(i>0)
    {
        if(maxheap->array[(i-1)/2]<maxheap->array[i])     
        {
            swap(i,(i-1)/2);
        }
        i=(i-1)/2;
    }
}
void insert(int val)
{
    int i,parent;
    if(maxheap->size>=100)
    {
        printf("\n Heap overflow !!");
        return;
    }
    
    maxheap->array[maxheap->size++]=val;
    
    heapify_up(maxheap->size-1);
}

void display()
{
    int i;

    for(i=0;i<maxheap->size;i++)
    {
        printf("%d ",maxheap->array[i]);
    }
}

void heapify_down(int i)
{
    while(i<maxheap->size)
    {
        if(maxheap->array[(2*i)+1]<maxheap->array[(2*i)+2])
        {
            swap((2*i)+2,i);
            i=(2*i)+2;
        }
        else{
            swap((2*i)+1,i);
            i=(2*i)+1;
        }
    }
}
void deletion()
{
    maxheap->array[0]=maxheap->array[maxheap->size-1];
    maxheap->size--;
    
    heapify_down(0);
}

void main()
{
    int ch,val;
    maxheap=malloc(sizeof(struct heap));
    maxheap->size=0;
    do
    {
        printf("\n1.Insert\t\t2.Extract max\t\t0.Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: printf("\n Enter the value to insert: ");
                scanf("%d",&val);
                insert(val);
                display();
                break;

            case 2:if(maxheap->size==0){printf("\n Heap empty !!"); return;}
                printf("\nMax element: %d\n",maxheap->array[0]);
                deletion();
                display();
                break;
            
            case 3: 
        }
    } while (ch!=0);
    
}
