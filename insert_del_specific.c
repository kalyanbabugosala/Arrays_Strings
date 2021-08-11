#include<stdio.h>
#define max 100
int i,array[max];
void display(int arr[],int n);
int main()
{
	int n,element,pos;
	printf("Enter no of elements:");
	scanf("%d",&n);
	printf("Enter n integers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Before any modifications:");
	display(array,n);
	printf("For inserting please enter an element and position");
	scanf("%d %d",&element,&pos);
	InsertAt(array,element,pos,n);
	printf("For deleting please enter an element position");
	scanf("%d",&pos);
	DeleteAt(array,pos,n);
}
InsertAt(int arr[],int element,int pos,int n)
{
	arr[pos]=element;
	printf("Resultant array is\n");
	display(arr,n);
}
DeleteAt(int arr[],int pos,int n)
{
	if ( pos >= n+1 )    
    	printf("Deletion not possible.\n");
    else
    {    
        for ( i = pos; i < n-1 ; i++ ) 
        	arr[i] = arr[i+1];        
        
        printf("Resultant array is\n");
        //display(arr,n);        
		for( i = 0 ; i < n - 1 ; i++ )        
        	printf("%d\n", arr[i]);
    	
	}    
}
void display(int arr[],int n)
{
	
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}	
}
