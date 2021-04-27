/*
@ironsubhajit
Quick Sort Divide & conquer method
*/

#include<stdio.h>
int partition(int *,int,int);
void quick_sort(int *,int,int);

int main()
{
	int n,i;
	printf("\nEnter the number of elements:");
	scanf("%d",&n);
	int ar[n];
	printf("\nEnter the elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&ar[i]);
	quick_sort(ar,0,n-1);//passing arguments array, lower bound & upper bound
	printf("\nThe sorted array is:");
	for(i=0;i<n;i++)
		printf("%d ",ar[i]);
	return(0);
}
void quick_sort(int ar[],int p,int r)
{
	int q;//initializing key after partition
	if(p<r)//lower bound is less than upper bound of the array
	{
		q = partition(ar,p,r);//partitioning array with arguments array, lower bound & upper bound
		quick_sort(ar,p,q-1);//recursively call with lower bound & (key-1) argument
		quick_sort(ar,q+1,r);//recursively call with (key-1) & lower bound argument
	}
}
int partition(int ar[],int p,int r)
{
	int x,i,j,q,t;
	x = ar[p];//x set to value of lower bound
	i = p;//i set to lower bound
	for(j = p+1; j <= r; j++)
	{
		if(ar[j] <= x)//check lower bound is greater or equal
		{
			i = i+1;
			if(i != j)//swapping a[i] & a[j]
			{
				t = ar[i];
				ar[i] = ar[j];
				ar[j] = t;
			}
		}
	}
	//swapping of start position & key position
	t = ar[p];
	ar[p] = ar[i];
	ar[i] = t;
	//----
	q = i;//set q to key position
	return q;
}

