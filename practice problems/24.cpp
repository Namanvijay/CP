#include <bits/stdc++.h>
using namespace std;

void fun(int arr[],int n)
{
	unordered_map<int,int> m;
	for(int i=0;i<n;i++)
		m[arr[i]]++;
	unordered_map<int,int> ::iterator it;
	for(auto it=m.begin();it!=m.end();it++)
	{
		cout<<it->first<<" "<<it->second;
		cout<<endl;
	}
}

int main()
{
	int n;
	int arr[n];
	cin>>n;
	for(int i=0;i<n;i++)
      cin>>arr[i];
     fun(arr,n);
     return 0;
}     