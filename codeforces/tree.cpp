//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
	ll n;
	cin>>n;
	ll arr[n];
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];

	}

	ll ans=2*n-1+arr[0];
	for(ll i=0;i<n-1;i++)
	{
		 ans=ans+abs(arr[i+1]-arr[i]);
	}
	cout<<ans<<endl;
	return 0;
}