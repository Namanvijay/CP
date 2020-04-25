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
		ll n,m,h=1,maxi=0;
		cin>>n>>m;
		vector <ll> v(100000,0),v2;
		for(ll i=0;i<n;i++)
		{
			ll p;
			cin>>p;
			v[p]=h;
			h++;
			maxi=max(maxi,p);
		}
		vector <ll> v1;
		for(ll i=0;i<m;i++)
		{
			ll k;
			cin>>k;
			v1.pb(k);
		}
		
		
		ll temp=-1;
		ll ans=0;
		//cout<<"%%%%"<<ans<<endl;

		for(ll i=0;i<m;i++)
		{
			ll t=v[v1[i]];
			if(temp<t)
			{
				ans=ans+2*(t-i-1)+1;
				
				temp=t;
			}
			else
				ans=ans+1;


		}
	//	for(ll i=1;i<=maxi;i++)
		//{
		//	cout<<v[i]<<" ";
		//}
		cout<<ans<<endl;
		
		
	}
	return 0;
}