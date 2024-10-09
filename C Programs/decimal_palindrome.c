#include<stdio.h>
#include<string.h>

void main()
{
	char str[20];
	char integer[20];
	char fraction[20];
	char rev_frac[20];
	char rev_integer[20];
	int i,f=0,j,n,k=0;
	
	printf("Enter a decimal number: ");
	scanf("%[^\n]%*c",str);
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		if(str[i]=='.')
		{
			f++;
			for(j=i+1;j<n;j++)
			{
				fraction[k]=str[j];
				k++;
			}
			break;
		}
		integer[i]=str[i];
	}
	k=0;
	for(i=strlen(fraction)-1;i>=0;i--)
	{
		rev_frac[k]=fraction[i];
		k++;
	}

	if(f>0)
	{
		if(strcmp(integer,rev_frac))
		{
			printf("\n Not palindrome");
		}
		else{
			printf("\n Palindrome");
		}
	}
	else{
		k=0;
		for(i=strlen(integer)-1;i>=0;i--)
		{
			rev_integer[k]=integer[i];
			k++;
		}
		if(strcmp(integer,rev_integer))
		{
			printf("\n Not palindrome");
		}
		else{
			printf("\n Palindrome");
		}
	}
}
