#include<stdio.h>
#include<string.h>
#define max 100
int main()
{
	char str[max];
	int i,len,flag;
	flag=0;
	printf("Please enter string:");
	gets(str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]!=str[len-i-1])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("\n %s is a palindrome string",str);
	}
	else
	{
		printf("\n entered string is not palindrome");
	}
	return 0;
}
