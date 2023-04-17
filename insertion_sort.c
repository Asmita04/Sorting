//Insertion sort
#include<stdio.h>
int j=0;
void printArray(int size,int *a)
{
	printf("\nList is:");
	for(int i=0;i<size;i++)
	{
		printf("%d,",a[i]);
	}
	printf("\n");
	
	
}
void insertion_Sort(int size,int *a)
{
	
	for(int i=0;i<size;i++)
	{
		int	temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
		printArray(size,a);
}
}


int main()
{
	int size;
	printf("Enter the size of array:");
	scanf("%d",&size);
	
	int a[size];
	for(int i=0;i<size;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printArray(size,a);
	insertion_Sort(size,a);
	printArray(size,a);
}