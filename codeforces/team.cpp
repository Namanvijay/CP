//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
	ll n;
	cin>>n;
	ll arr[n][3];
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<3;j++)
		{
			cin>>arr[i][j];
		}
	}
	ll ans=0;
	for(ll i=0;i<n;i++)
	{
		ll c=0;
		for(ll j=0;j<3;j++)
		{
			if(arr[i][j]==1)
				c++;

		}
		if(c>=2)
			ans++;

	}
	cout<<ans<<endl;
	return 0;


}