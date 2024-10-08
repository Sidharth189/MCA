#include<stdio.h>

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
    return fact;
}
void main()
{
    int n;
    printf("Enter the limit: ");
    scanf("%d",&n);
    printf("\n Factorial: %d",factorial(n));
}