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
		ll n;
		cin>>n;
		vector<ll> v1;
		vector<ll> v2;

		for(ll i=0;i<n;i++)
		{ ll a;
			cin>>a;
			v1.pb(a);
		}
		for(ll i=0;i<n;i++)
		{
			ll a;
			cin>>a;
			v2.pb(a);
		}
		sort(v1.begin(),v1.end());
		sort(v2.begin(),v2.end());
    ll ans=0;
		for(ll i=0;i<n;i++)
		{
			ans=ans+min(v1[i],v2[i]);
		}

		cout<<ans<<endl;


	}
	return 0;
}