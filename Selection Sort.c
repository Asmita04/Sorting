//selection sort
#include<stdio.h>
void printArray(int size,int *a)
{
	printf("\nList is:");
	for(int i=0;i<size;i++)
	{
		printf("%d,",a[i]);
	}
	printf("\n");
}
int swap(int *ptr1,int *ptr2)
{
	int temp;
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
}
void Selection_sort(int size, int *a)
{
	int j=0;
	for(int i=0;i<size-1;i++)
	{
		int min=i;
		
		for(j=i+1;j<size;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
			
		}
		if(min!=i)
			{
				swap(&a[i],&a[min]);
			}
	}
	
}

int main()
{
	int size;
	printf("Enter the size:");
	scanf("%d",&size);
	
	int a[size];
	printf("\n Enter the elements:\n");
	for(int i=0;i<size;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("Before sort:\n");
	printArray(size,a);
	printf("After sort:\n");
	Selection_sort(size,a);
	printArray(size,a);
	
}