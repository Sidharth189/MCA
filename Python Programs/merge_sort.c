#include<stdio.h>

void merge_sort(int arr[],int low,int mid,int high)
{
    int i,j,k,n1,n2;
    n1=mid-low+1;
    n2=high-mid;
    if(low<=high)
    {
        return;
    }

    merge_sort(arr,low,mid/2,mid);
    merge_sort(arr,mid+1,high)

    int l[n1],r[n2];

    for(i=0;i<n1;i++)
    {
        l[i]=arr[low+i];
    }
    for(j=0;j<n2;j++)
    {
        r[j]=arr[mid+1+i];
    }

    i=0;
    j=0;
    k=0;
    while(i<n1 && j<n2)
    {
        if(l[i]<r[j])
        {
            arr[k]=l[i];
            i++;
        }
        else{
            arr[k]=r[j];
        }
        k++;
    }
}
void main()
{
    int arr[10]={2,6,40,5,1,0,60,55,8,10};

    merge_sort(arr,0,4,9);

}
