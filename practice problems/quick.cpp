#include <iostream>
using namespace std;

void swap(int *a,int *b)
{	int temp;

	temp=*a;
	*a=*b;
	*b=temp;

}

int partition(int a[],int l,int h)
{

	int pivot;
	int i,j;
	i=l;
	j=h;
	pivot=a[l];
	while(i<j)
	{

		do{

			i++;
		}
		while(a[i]<=pivot);

		do{

			j--;
		}
		while(a[j]>pivot);

		if(i<j)
		{

			swap(&a[i],&a[j]);
		}


	}

	swap(&a[l],&a[j]);
	return j;
}

void quicksort(int a[],int l,int h)
{
	if(l<h)
	{	
		int j;
		j=partition(a,l,h);
		quicksort(a,l,j);
		quicksort(a,j+1,h);

	}
}	

int main()
{	
	int n,i,arr[200];
	cout<<"Enter the no of elements\n";
	cin>>n;
	cout<<"Enter elements\n";
	for(i=0;i<n;i++)
		cin>>arr[i];

	cout<<"After sorting\n";
	quicksort(arr,0,n-1);
	for(i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	return 0;
}