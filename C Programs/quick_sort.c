#include<stdio.h>
#include<stdlib.h>

int *arr;

void quick_sort(int low,int up)
{
    int p,i,j,temp;
    if(low>=up)
    {
        return;
    }
    p=arr[up];
    i=low-1;

    for(j=low;j<up;j++)
    {
        if(arr[j]<p)
        {
            i++;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    temp=arr[i+1];
    arr[i+1]=arr[up];
    arr[up]=temp;

    quick_sort(low,i-1);
    quick_sort(i+1,up);
}
void main()
{
    int i,n;

    printf("\n Enter the limit: ");
    scanf("%d",&n);

    arr=malloc(n*sizeof(int));
    if(arr==NULL)
    {
        printf("\n Memory allocation failed !!");
        exit(0);
    }

    printf("\n Enter the numbers: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\n Before sorting: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    quick_sort(0,n-1);

    printf("\n After sorting: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}