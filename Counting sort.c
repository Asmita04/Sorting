//counting sort
#include<stdio.h>
void PrintArray(int *A,int size)
{
//	printf("\n");
	for(int i=0;i<size;i++)
	{
		printf("%d\t",A[i]);
	}
}

void countingSort(int *A)
{
	int count[10]={0};
	//count[i]={0};
	for(int i=0;i<10;i++)
	{
	//	count[i]=0;
		++count[A[i]];
		printf("count%d\t",count[i]);
	}
	
}
int main()
{
	int n,k;
	printf("Enter the size of list:");
	scanf("%d",&n);
	
	printf("Enter the range of numbers:");
	scanf("%d",&k);
	
	int InputArray[n];
	int OutputArray[n];
	for(int i=0;i<n;i++)
	{
		printf("InputArray[%d]:",i);
		scanf("%d",&InputArray[i]);
	}
	//count array Initialize with zero 
	int count[k];
	for(int j=0;j<k;j++)
	{
		count[j]=0;
	}
	for(int i=0;i<n;i++)
	{
		count[InputArray[i]]++;
	} 
	printf("Step 1:"); 
	PrintArray(count,10);
	
	count[InputArray[0]];
	
	for(int i=1;i<n;i++)
	{
		count[i]=count[i]+count[i-1];
	}
	printf("\nStep 2:");
	PrintArray(count,10);
	
	for(int i=0;i<n;i++)
	{
		
		
	}
	


}