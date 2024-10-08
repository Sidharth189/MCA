#include<stdio.h>
#include<stdlib.h>

struct Employee
{
    char name[20];
    int employee_id;
    float salary;
};

void main()
{
    int n,i;
    struct Employee *ptr;
    printf("Enter the number of employee: ");
    scanf("%d",&n);
    ptr=(struct Employee*)malloc(n*sizeof(struct Employee));
    if(ptr==NULL)
    {
        printf("\n Memory not allocated");
    }
    else{
        for(i=0;i<n;i++)
        {
            printf("\nEnter employee %d details: \n",i+1);
            printf("\nEnter the name: ");
            scanf("\n%[^\n]%*c",ptr[i].name);
            printf("\nEnter the employee id: ");
            scanf("%d",&ptr[i].employee_id);
            printf("\nEnter the salary: ");
            scanf("%f",&ptr[i].salary);
        }
        for(i=0;i<n;i++)
        {
            printf("\nEmployee %d Details !!\n",i+1);
            printf("\n Name: %s",ptr[i].name);
            printf("\n Employee ID: %d",ptr[i].employee_id);
            printf("\n Salary: %f \n",ptr[i].salary);
        }
    }
}