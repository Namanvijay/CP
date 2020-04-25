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
	ll ev=0,od=0;
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]%2==0)
			ev++;
		else
			od++;
	}

	ll ans=min(ev,od);
	cout<<ans<<endl;
	return 0;
		

}