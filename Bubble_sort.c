//Bubble sort
#include<stdio.h>
int temp=0;
void PrintArray(int *A,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d\t",A[i]);
	}
}
void BubbleSort(int *A,int size)
{
 //	int flag=1;
 	int flag=0;
	for(int i=0;i<size-1 && flag!=1 ;i++)
	{
		flag =0;
		for(int j=0;j<size-1-i;j++)
		{
			if(A[j]>A[j+1])
			{
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
				flag=1;
			}
		}
		PrintArray(A,size);
		printf("\n");
		
		
	/*	if(flag==0)
		{
			return;
		}*/
	}
}

int main()
{
	int size;
	printf("Enter the size of array:");
	scanf("%d",&size);
	
	int A[size];
	for(int i=0;i<size;i++)
	{
		printf("A[%d]=",i);
		scanf("%d",&A[i]);
	}
	printf("Before sort:");
	PrintArray(A,size);
	
	printf("\nAfter sort:");  
	BubbleSort(A,size) ;                                                                                                                                            
	PrintArray(A,size);
	
	
}