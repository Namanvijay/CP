#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k,m,p,e1=0,o1=0,e2=0,o2=0,ans=0;
		cin>>n;

		vector <ll> v1;
		vector <ll> v2;
		for(ll i=0;i<n;i++)
		{
			cin>>k;
			v1.pb(k);
		}
		cin>>m;
		for(ll i=0;i<m;i++)
		{
			cin>>p;
			v2.pb(p);
		}
		for(ll i=0;i<n;i++)
		{
			if(v1[i]%2==0)
				e1++;
			else
				o1++;
		}
		for(ll i=0;i<m;i++)
		{
			if(v2[i]%2==0)
				e2++;
			else
				o2++;
		}
		ans=ans+e2*e1+o2*o1;
		cout<<ans<<endl;

	}
	return 0;
}
