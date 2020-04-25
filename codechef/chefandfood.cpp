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
		vector <ll> s;
		vector <ll> p;
		vector <ll> v;
		ll a,b,c;
		ll ans=0;
		cin>>n;
		for(ll i=0;i<n;i++)
		{
			cin>>a>>b>>c;
			s.pb(a);
			p.pb(b);
			v.pb(c);
		}
		for(ll i=0;i<n;i++)
		{
			ll k=floor(v[i]/s[i]);
			ll x=k*p[i];
			ans=max(ans,x);

		}
		cout<<ans<<endl;

	}
}