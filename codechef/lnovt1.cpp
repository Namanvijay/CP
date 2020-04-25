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
		ll n,k,l,r,c=0;
		cin>>n;
		vector <ll> v;
		ll ans=0;
		vector <ll> v1(100000,0);
		for(ll i=0;i<n;i++)
		{
			cin>>k;
			v.pb(k);
			ans=max(ans,k);
			v1[k]=1;

		}
		sort(v.begin(),v.end());
		
		for(ll i=0;i<n;i++)
		{
			if(v1[v[i]]!=v1[v[i]+1] && v1[v[i]]!=v1[v[i]-1])
			{
				v1[v[i]+1]=1;
				c++;
			}
		}
		cout<<c<<endl;


	}
}