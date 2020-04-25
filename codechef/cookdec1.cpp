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
		vector <ll> v;
		map <ll,ll> m;
		ll n,ma=0;
		cin>>n;
		for(ll i=0;i<n;i++)
		{
			ll k;
			cin>>k;
			v.pb(k);
			m[k]++;
		}
		for(auto it=m.begin();it!=m.end();it++)
		{
			
			ma=max(ma,it->second);
		}

		ll ans=n-ma;
		cout<<ans<<endl;




	}
	return 0;
}