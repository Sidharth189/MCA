#include<stdio.h>

char matrix[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
void printboard();
void win();
int main()
{

    int ch,i=1,p=1,j,k;
    char temp[3][3];
    for(j=0;j<3;j++)
    {
        for(k=0;k<3;k++)
        {
            temp[j][k]=matrix[j][k];
        }
    }
    printf("\n Player 1: X\n Player 2: O\n");
    do{
        printboard(temp);
        printf("\n Select your position: ");
        printf("\n Player %d : ",p);
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: if(p==1){
                temp[0][0]='X';
                p++;
            }
            else{
                temp[0][0]='O';
                p--;
            }
            break;
            case 2:if(p==1){
                temp[0][1]='X';
                p++;
            }
            else{
                temp[0][1]='O';
                p--;
            }
            break;
            case 3:if(p==1){
                temp[0][2]='X';
                p++;
            }
            else{
                temp[0][2]='O';
                p--;
            }
            break;
            case 4:if(p==1){
                temp[1][0]='X';
                p++;
            }
            else{
                temp[1][0]='O';
                p--;
            }
            break;
            case 5:if(p==1){
                temp[1][1]='X';
                p++;
            }
            else{
                temp[1][1]='O';
                p--;
            }
            break;
            case 6:if(p==1){
                temp[1][2]='X';
                p++;
            }
            else{
                temp[1][2]='O';
                p--;
            }
            break;
            case 7:if(p==1){
                temp[2][0]='X';
                p++;
            }
            else{
                temp[2][0]='O';
                p--;
            }
            break;
            case 8:if(p==1){
                temp[2][1]='X';
                p++;
            }
            else{
                temp[2][1]='O';
                p--;
            }
            break;
            case 9:if(p==1){
                temp[2][2]='X';
                p++;
            }
            else{
                temp[2][2]='O';
                p--;
            }
            break;
        }
        win(temp);
    }while(i!=0);

    return 0;2
}

void printboard(char temp[3][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        printf("____________\n");
        for(j=0;j<3;j++)
        {
            printf("| %c ",temp[i][j]);
        }
        printf("|\n");
    }
}

void win(char temp[3][3])
{
    int i,f1=0,f2=0,f3=0,f4=0,f5=0,f6=0,f7=0,f8=0,f11=0;
    int f9=0,f10=0,f12=0,f13=0,f14=0,f15=0,f16=0,f17=0,f18=0;
    printf("KING KONG");
    for(i=0;i<3;i++)
    {
        if(temp[i][i]=='X')
        {
            f1++;
            if(f1==3)
            {
                printf("\n Player 1 wins !!!");
            }  
        }
        else if(temp[0][i]=='O')
        {
            f2++;
            if(f2==3)
            {
                printf("\n Player 2 wins !!");
            }
        }
        else if(temp[i][0]=='X')
        {
            f3++;
            if(f3==3)
            {
                printf("\n Player 1 wins !!");
            }
        }
        else if(temp[i][0]=='O')
        {
            f4++;
            if(f4==3)
            {
                printf("\n Player 2 wins !!");
            }
        }
        else if(temp[i][1]=='X')
        {
            f5++;
            if(f5==3)
            {
                printf("\n Player 1 wins !!");
            }
        }
        else if(temp[i][1]=='O')
        {
            f6++;
            if(f6==3)
            {
                printf("\n Player 2 wins !!");
            }
        }
        else if(temp[i][2]=='O')
        {
            f7++;
            if(f7==3)
            {
                printf("\n Player 2 wins !!");
            }
        }
        else if(temp[i][2]=='X')
        {
            f8++;
            if(f8==3)
            {
                printf("\n Player 1 wins !!");
            }
        }
        else if(temp[0][i]=='O')
        {
            f9++;
            if(f9==3)
            {
                printf("\n Player 2 wins !!");
            }
        }
        else if(temp[0][i]=='X')
        {
            f10++;
            if(f10==3)
            {
                printf("\n Player 1 wins !!");
            }
        }
        else if(temp[1][i]=='O')
        {
            f11++;
            if(f11==3)
            {
                printf("\n Player 2 wins !!");
            }
        }
        else if(temp[1][i]=='X')
        {
            f12++;
            if(f12==3)
            {
                printf("\n Player 1 wins !!");
            }
        }
        else if(temp[2][i]=='X')
        {
            f13++;
            if(f13==3)
            {
                printf("\n Player 1 wins !!");
            }
        }
        else if(temp[1][i]=='O')
        {
            f14++;
            if(f14==3)
            {
                printf("\n Player 2 wins !!");
            }
        }
        else if(temp[2][i]=='X')
        {
            f15++;
            if(f15==3)
            {
                printf("\n Player 1 wins !!");
            }
        }
        else if(temp[2][i]=='O')
        {
            f16++;
            if(f16==3)
            {
                printf("\n Player 2 wins !!");
            }
        }
        else if(temp[i][2-i]=='X')
        {
            f17++;
            if(f17==3)
            {
                printf("\n Player 1 wins !!");
            }
        }
        else if(temp[i][2-i]=='O')
        {
            f18++;
            if(f18==3)
            {
                printf("\n Player 2 wins !!");
            }
        }
        else{
            printf("Game Draw !!");  
        }

    }
}