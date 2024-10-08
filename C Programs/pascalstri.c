#include<stdio.h>

int main()
{
    int i,j,n,c;
    printf("Enter the limit : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<(n-i)-1;j++)
        {
            printf(" ");
        }
        for(j=0;j<i+1;j++)
        {
            if(j==0)
            {
                printf("1 ");
                c=1;
            }
            else{
                c=c*(i-j+1)/j;
                printf("%d ",c);
            }
        }
        printf("\n");
    }
}