#include<stdio.h>

void merge_sort(int arr[],int low,int high)
{
    int n1,n2,l[10],r[10],i,j,k;
    int mid=low+(high-low)/2;
    n1=mid-low+1;
    n2=high-mid;
   
    if(low>=high)
    {
        return;
    }
   
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    for(i=0;i<n1;i++)
    {
        l[i]=arr[low+i];
    }
    for(i=0;i<n2;i++)
    {
        r[i]=arr[mid+1+i];
    }
   
    i=0;
    j=0;
    k=low;
   
    while(i<n1 && j<n2)
    {
        if(l[i]<r[j])
        {
            arr[k]=l[i];
            i++;
        }
        else{
            arr[k]=r[j];
            j++;
        }
        k++;
    }
   
    while(i<n1)
    {
        arr[k]=l[i];
        i++;
        k++;
    }
   
    while(j<n2)
    {
        arr[k]=r[j];
        j++;
        k++;
    }
   
    printf("\n During sorting: ");
    for(i=0;i<high;i++)
    {
        printf("%d ",arr[i]);
    }
}

void main()
{
    int i;
    int arr[10]={40,34,56,87,23,9,1,10,11,45};
   
    printf("\n Before sorting: ");
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
   
    merge_sort(arr,0,9);
   
    printf("\n After sorting: ");
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
}
