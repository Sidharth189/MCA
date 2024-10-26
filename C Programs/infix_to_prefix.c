#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverse(char *exp)
{
    int size=strlen(exp),i,j;
    char *temp=malloc(size*sizeof(char));
    if(temp==NULL)
    {
        printf("\n Memory not allocted !!");
        return;
    }
    j=size-1;
    for(i=0;i<size;i++)
    {
        temp[j]=exp[i];
        j--;
    }
    strcpy(exp,temp);
    exp[size]='\0';
}
void parenthesis(char *exp)
{
    int i;
    for(i=0;i<strlen(exp);i++)
    {
        if(exp[i]=='(')
        {
            exp[i]=')';
        }
        else if(exp[i]==')')
        {
            exp[i]='(';
        }
    }
    printf("%s",exp);
}
void infix_to_prefix(char *exp)
{
    int len,i=0,top=-1;

    reverse(exp);
    parenthesis(exp);

    int len=strlen(exp);
    char *temp=malloc(len*sizeof(temp));
    printf("\n");
    while(exp[i]!='\0')
    {
        if(isalnum(exp[i]))
        {
            printf("%c",exp[i]);
        }
        else if(exp[i]=='(')
        {
            push(exp[i],&temp[i]);
        }
        else if(exp[i]==')')
        {
            while(tem)
        }
    }
}
void main()
{
    char exp[]="(A+B)(C-D)";
    infix_to_prefix(exp);
}