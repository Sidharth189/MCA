#include<stdio.h>
#include<stdlib.h>

int adj_matrix[10][10];
int visited[10];

void add_edge()
{
    int u,v;
    printf("\n Enter the edge: ");
    scanf("%d %d",&u,&v);
    
    if(u>=10 || v>=10)
    {
        printf("\n Edge not possible !!");
        return;
    }
    
    if(adj_matrix[u][v]==1)
    {
        printf("\n Edge already exist !!");
        return;
    }
    
    adj_matrix[u][v]=1;
    printf("\n Edge added !!");
}

void dfs(int val)
{
    int i;
    printf("%d ",val);
    visited[val]=1;
    
    for(i=0;i<10;i++)
    {
        if(adj_matrix[val][i]==1 && visited[val]!=0)
        {
            dfs(i);
        }
    }
}
void main()
{
    int ch,val,i;
    do{
        printf("\n1.Add edge\t\t2.dfs");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        
        switch(ch)
        {
            case 1:add_edge();
                break;
                
            case 2:printf("\n Enter the starting edge: ");
                scanf("%d",&val);
                for(i=0;i<10;i++)
                {
                    visited[i]=0;
                }
                dfs(val);
                break;
        }
    }while(ch!=0);
}
