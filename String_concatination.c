#include<stdio.h>
#include<string.h>
#define max 100
int main()
{
	char str1[max],str2[max];
	int i;
	printf("Enter first string:");
	gets(str1);
	printf("Enter second string:");
	gets(str2);
	int length=0;
	while(str1[length]!='\0')
	{
		++length;
	}
	for(i=0;str2[i]!='\0';++i,++length)
	{
		str1[length]=str2[i];
	}
	str1[length]='\0';
	printf("After concatenation:");
	puts(str1);
	printf("New string length is:%d",strlen(str1));
	
	return 0;
	
}

