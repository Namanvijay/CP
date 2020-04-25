#include <bits/stdc++.h>
using namespace std;



bool fun(int a,int b)
{
	if(a<b)
		return true;
	else 
		return false;
}
int mon(int arr[],int n)
{

	int i,j;
	int temp[n];
	temp[0]=1;
	for(i=1;i<n;i++)
	{

		temp[i]=1;
		for(j=0;j<i;j++)
		{

			while(arr[j]<arr[i] && temp[i]<temp[j]+1)
			{
				temp[i]=temp[j]+1;
			}

		}
	}

	sort(temp,temp+n,fun);
	return temp[n-1];



}

int main()
{

	int n,i,arr[20];
	cin>>n;
	for(i=0;i<n;i++)
		cin>>arr[i];
	cout<<mon(arr,n);
	return 0;
}