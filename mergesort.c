#include<stdio.h>
// function to merge two halves of an array
void merge(int arr[], int low, int mid, int high)
{
	int b[10];
	int i=low, j=mid+1,k=0;
	// merge elements in sorted orger
	while(i <= mid && j <= high)
	{
		if(arr[i] < arr[j])
		{
			b[k] = arr[i];
			i++;
		}
		else
		{
			b[k] = arr[j];
			j++;
			
		}
		k++;
	}
	// copy remaining elements from left sub array
	while(i <= mid)
	{
		b[k] = arr[i];
		i++;
		k++;
	}
	// copy remaining elements from right sort
	while(j <= mid)
	{
		b[k] = arr[j];
		j++;
		k++;
	}
	// copy merged elements back to original array 
	for(i=low,k=0;i<=high;i++,k++)
	arr[i] = b[k];
}
// funtion to perform merge sort
void mergesort(int arr[],int left,int right)
{
	if(left<right)
	{
		int mid = (left+right)/2;
		// find the middle point
		// recursively sort first & second halves
		mergesort(arr,left,mid);
		mergesort(arr,mid+1,right);
		merge(arr,left,mid,right);
	}
}
int main()
{
	int a[25],i,n;
	printf("how many elements are you going to enter");
	scanf("%d",&n);
	printf("enter %d elements:",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	mergesort(a,0,n-1);
	printf("sorted array:\n");
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	return 0;
}
