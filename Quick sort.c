//Quick sort

#include<stdio.h>
int partioning(int *A,int L,int R);
int size;
int L,R;

void PrintArray(int *A,int size)
{
	printf("\n");
	for(int i=0;i<size;i++)
	{
		printf("%d\t",A[i]);
	}
}


void QuickSort(int *A,int L,int R)
{
	int Mid;
	if(L<R)
	{
		Mid = partioning(A,L,R);
		QuickSort(A,L,Mid-1);
		QuickSort(A,Mid+1,R);
	}
	
	
}
void swap(int num1, int num2, int *A) {
   int temp = A[num1];
   A[num1] = A[num2];
   A[num2] = temp;
}

int partioning(int *A,int L,int R)
{
	int pivot=A[L];
	int i=L+1;
	int j=R;

	while(i<j)
	{
		
		while(A[i]<=pivot )
		{
			i++;
		}
		while(A[j]>pivot)
		{
			j--;
		}
//		if(i>j)
//		{
//			break;
//		}
		if(i<j)
		{
		 swap(i,j,A);
		}
	}
	swap(L,j,A);
	PrintArray(A,size);
	return j;
}
int main()
{

	printf("Enter the size of array:");
	scanf("%d",&size);
	
	int A[size];
	for(int i=0;i<size;i++)
	{
		printf("A[%d]:",i);
		scanf("%d",&A[i]);
	}
	printf("After sort:");
	QuickSort(A,0,size-1);
	PrintArray(A,size);
	
	
}