#include<stdio.h>

void toh(int num,char source,char destn,char temp)
{
    if(num==1)
    {
        printf("\nMove disk %d from %c to %c",num,source,destn);
        return;
    }
    toh(num-1,source,temp,destn);
    printf("\nMove disk %d from %c to %c",num,source,destn);
    toh(num-1,temp,destn,source);
}

void main()
{
    int num;
    printf("\n We have three tower's :\n\t\tSource tower: A\t\tDestiniation tower: C and an Extra tower: B");
    printf("\n Enter the number of disk's: ");
    scanf("%d",&num);
    toh(num,'A','C','B');
}