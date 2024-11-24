#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n,i,j,k,arr[20];
    printf("\n Enter the limit: ");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("\n Before insertion: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    for(i=1;i<n;i++)
    {
        k=arr[i];
        for(j=i-1;j>=0 && k<arr[j];j--)
        {
               arr[j+1]=arr[j];
        }
        arr[j+1]=k;
    }

    printf("\n After Insertion: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
}