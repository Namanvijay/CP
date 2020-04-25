//@@@@@@@JAI BAJRANG BALI@@@@@@@@@@@
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
		ll n,k,p,ans=0;
		cin>>n>>k;
		vector <ll> v;
		for(ll i=0;i<n;i++)
		{
			cin>>p;
			v.pb(p);
		}
		for(ll i=0;i<n;i++)
		{
			ll c=0,cp=0;
			for(ll j=0;j<n;j++)
			{
				if(v[i]>v[j])
					c++;
			}
			for(ll j=i+1;j<n;j++)
			{
				if(v[i]>v[j])
					cp++;
			}
			ans=ans+cp*k+c*(((k-1)*k)-((k-1)*k)/2);
			



		}
		cout<<ans<<endl;


	}
	return 0;
}