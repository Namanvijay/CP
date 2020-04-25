//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,ma=0;
		cin>>n;
		ll arr[n];
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
			ma=max(ma,arr[i]);
		}
		//cout<<"%%%"<<ma<<endl;

		ll ans=0;
		ll mi=arr[n-1];
		for(ll i=n-2;i>=0;i--)
		{
			if(arr[i]>mi)
				ans++;
			else
				mi=arr[i];
		}
		cout<<ans<<endl;
			

	}
	return 0;
}