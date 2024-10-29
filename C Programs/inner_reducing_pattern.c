#include<stdio.h>

void main()
{
    int n,len,i,j,k;
    printf("\n Enter the limit: ");
    scanf("%d",&n);
    len=(2*n)-1;
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {
            for(k=0;k<len/2+1;k++)
            {
                if(i==k || i==len-1-k || j==k || j==len-1-k)
                {
                    printf("%d ",(len/2)+1-k);
                    break;
                }
            }
        }
        printf("\n");
    }
}