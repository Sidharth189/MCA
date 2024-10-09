#include<stdio.h>
#include<stdlib.h>

void display_matrix(int **matrix,int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf(" %d ",matrix[i][j]);
        }
        printf("\n");
    }
}

void multiply_matrix(int **m1,int **m2,int r1,int r2,int c1,int c2)
{
    int i,j,k,sum=0;
    int **result=(int **)malloc(r1*sizeof(int*));
    for(i=0;i<c2;i++)
    {
        result[i]=(int*)malloc(c2*sizeof(int));
    }
    
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<r2;k++)
            {
                sum=sum+(m1[i][k]*m2[k][j]);
            }
            result[i][j]=sum;
            sum=0;
        }
    }
    printf("\n Sum matrix :\n");
    display_matrix(result,r1,c2);
}


void main()
{
    int r1,r2,c1,c2,i,j;
    printf("Enter the number of rows of matrix1: ");
    scanf("%d",&r1);
    printf("\nEnter the number of columns of matrix1: ");
    scanf("%d",&c1);
    printf("\nEnter the number of rows of matrix2: ");
    scanf("%d",&r2);
    printf("\nEnter the number of columns of matrix2: ");
    scanf("%d",&c2);
    
    if(c1!=r2)
    {
        printf("\n Multiplication not possible");
    }
    else{    
        int **matrix1=(int **)malloc(r1*sizeof(int *));
        for(i=0;i<r1;i++)
        {
            matrix1[i]=(int *)malloc(c1*sizeof(int));
        }
        int **matrix2=(int **)malloc(r2*sizeof(int *));
        for(i=0;i<r2;i++)
        {
            matrix2[i]=(int *)malloc(c2*sizeof(int));
        }

        printf("\n Enter the elements of matrix 1: ");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("\n Element %d %d: ",i,j);
                scanf("%d",&matrix1[i][j]);
            }
        }

        printf("\n Enter the elements of matrix 2: ");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("\n Element %d %d: ",i,j);
                scanf("%d",&matrix2[i][j]);
            }
        }

        printf("\n MATRIX 1: \n");
        display_matrix(matrix1,r1,c1);
        printf("\n MATRIX 2: \n");
        display_matrix(matrix2,r2,c2);
        multiply_matrix(matrix1,matrix2,r1,r2,c1,c2);
    }
}


