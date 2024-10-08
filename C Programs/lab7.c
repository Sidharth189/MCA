#include<stdio.h>

int fibonacci(int n)
{
    if(n<=0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }

}

int fibonacci_s(int n,int a,int b)
{
    int temp;
    if(n>0)
    {
        printf("%d ",a);
        temp=a+b;
        a=b;
        b=temp;
        fibonacci_s(n-1,a,b);
    }
}

void main()
{
    int n,i;
    printf("Enter the limit: ");
    scanf("%d",&n);
    printf("\n Fibonacci series: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",fibonacci(i));
    }
    printf("\n");
    fibonacci_s(n,0,1);
}