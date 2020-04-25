#include <iostream>
using namespace std;

void merge(int a[],int l, int m ,int h)
{

	int n1,n2,i,j,k,L[20],R[20];
	
	n1=m-l+1;
	n2=h-m;
	for(i=0;i<n1;i++)
		L[i]=a[l+i];
	for(j=0;j<n2;j++)
	{
		R[j]=a[m+1+j];
	}

	i=0;
	j=0;
	k=l;

	while(i<n1 && j<n2)
	{
		if(L[i]<=R[j])
		{

			a[k]=L[i];
			i++;
		}

		else 
		{
			a[k]=R[j];
			j++;
		}

		k++;


	}

	while(i<n1)
	{

		a[k]=L[i];
		i++;
		k++;
	}

	while(j<n2)
	{
		a[k]=R[j];
		j++;
		k++;
	}
}

void mergesort(int a[],int l,int h)
{
		
		if(l<h)
		{
			int m=(l+h)/2;
			mergesort(a,l,m);
			mergesort(a,m+1,h);
			merge(a,l,m,h);
		}


}

int main()
{

	int n,arr[200],i,j;
	cout<<"Enter no of elements \n";
	cin>>n;
	cout<<"Enter values in array\n";
	for(i=0;i<n;i++)
		cin>>arr[i];

	cout<<"Array is\n";
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}

	mergesort(arr,0,n-1);
	cout<<"Sorted array";
	for(i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	return 0;
}
