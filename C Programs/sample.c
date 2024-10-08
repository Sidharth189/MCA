#include<stdio.h>
#include<string.h>

int main()
{
	char s[100];
	printf("Enter string: ");
	scanf("%[^\n]%*c",&s);
	printf("\n");
	printf("%d",strlen(s));
	for(int i=0;i<(strlen(s));i++)
	{
		printf("%c",s[i]);
	}
	return 0;
}