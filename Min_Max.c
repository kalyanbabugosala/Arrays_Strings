#include<stdio.h>
#define max 50
int i,j,arr[max],temp;
int main()
{
	int n;
	printf("Enter size of an array:");
	scanf("%d",&n);
	printf("Enter into elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i = 0; i<n; i++)  //loop for n iterations
    {  
        for(j = i+1; j<n; j++)  //loop until n-1 iterations,after this loop the largest element is in it's correct position ie last position
        {  
            if(arr[i] > arr[j])  //if it true its leads to swap 
            {  
                temp = arr[i];  
                arr[i] = arr[j];  
                arr[j] = temp;   
            }   
        }   
    }   
    //display(arr,n);
	printf("The maximum element is:%d",arr[n-1]);
	printf("\nThe minimum element is:%d",arr[0]);
	return 0;
}
/*void display(int arr[],int n)
{
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}*/

