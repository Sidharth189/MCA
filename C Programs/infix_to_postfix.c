#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

char stack[20];
int front=-1;
char postfix[20];
int count=0;

int precedence(char c)
{
    if(c=='*' || c=='/')
    {
        return 2;
    }
    else if(c=='+' || c=='-')
    {
        return 1;
    }
    return 0;
}

void insert_postfix(char c)
{
    postfix[count++]=c;
}

void pop()
{
    printf(" %c pop",front);
    if(front==-1)
    {
        return;
    }
    char peek=stack[front];
    insert_postfix(peek);
    front--;
}

void push(char c)
{
    printf("\n push %c",c);
    if(front>=19)
    {
        printf("\n stack overflow !!");
        return;
    }
    else if(front<0)
    {
        front=-1;
    }
    front++;
    stack[front]=c;
}

void find_postfix(char exp[])
{
    int len=strlen(exp),i;
    char peek;
    for(i=0;i<len;i++)
    {
        if(isalnum(exp[i]))
        {
            insert_postfix(exp[i]);
        }
        else if(exp[i]=='(')
        {
            push(exp[i]);
        }
        else if(exp[i]==')')
        {
            while(front!=-1 && stack[front]!='(')
            {
                pop();
            }
            if(front!=-1)
            {
                front--;
            }
        }
        else
        {
            while(front!=-1 && precedence(stack[front])>=precedence(exp[i]))
            {
                pop();
            }
            push(exp[i]);
        }
    }
    
    while(front!=-1)
    {
        pop();
    }

    postfix[count]='\0';
}

void main()
{
    int i=0;
    char infix[]="(A-B)*(C+D)";

    find_postfix(infix);

    while(postfix[i]!='\0')
    {
        printf("%c",postfix[i]);
        i++;
    }
}