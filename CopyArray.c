#include<stdio.h>
#define max 100
int source[max],dest[max];
int i;
void Copy_To_Dest(int source[],int n);
void display(int arr[],int n);
int main()
{
	int n;
	printf("Enter no of elements:");
	scanf("%d",&n);
	printf("Enter n integers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&source[i]);
	}
	Copy_To_Dest(source,n);
	printf("elements in source array:\n");
	display(source,n);
	printf("\nelements in destination array:\n");
	display(dest,n);
	return 0;
}
void Copy_To_Dest(int source[],int n)
{
	
	for(i=0;i<n;i++)
	{
		dest[i]=source[i];
	}
}
void display(int arr[],int n)
{
	
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}	
}
