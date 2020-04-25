//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
bool sorting(pair<ll,ll> &a,pair<ll,ll> &b)
{
	if(a.first==b.first)
		return (a.second<b.second);
	return (a.first<b.first);


}
bool fun(pair<ll,ll> &a,pair<ll,ll> &b)
{
	if(a.first==b.first)
		return a.second>b.second;
	return a.first<b.first;
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,a,b,flg=0;
		cin>>n;
		vector <pair<ll,ll>>v,v2;
		vector <char> v1;
		for(ll i=0;i<n;i++)
		{
			cin>>a>>b;
			v.pb(make_pair(a,b));
		}
		v2=v;
		sort(v2.begin(),v2.end(),fun);

		sort(v.begin(),v.end(),sorting);
		//for(ll i=0;i<n;i++)
		
			//cout<<v[i].first<<" "<<v[i].second<<endl;

		//for(ll i=0;i<n;i++)
		
			//cout<<v2[i].first<<" "<<v2[i].second<<endl;
		for(ll i=0;i<n-1;i++)
		{
			if(v[i].second>v[i+1].second)
			{
				cout<<"NO"<<endl;
				flg=1;
				break;
			}

        
		}
		ll x,y;

		if(flg==0)
		{
			cout<<"YES"<<endl;
			x=v2[0].first;
			y=v2[0].second;
			for(ll k=0;k<x;k++)
				v1.pb('R');
			for(ll k=0;k<y;k++)
				v1.pb('U');


			for(ll i=1;i<n;i++)
			{
				if(v2[i].first==v2[i-1].first)
				{
					continue;
				}
				else
				{
					 x=v2[i].first-x;
					 y=v2[i].second-y;
					 //cout<<"&&&&"<<x<<endl;
					 //cout<<"@@@@"<<y<<endl;
					 for(ll k=0;k<x;k++)
				     v1.pb('R');
				     x=v2[i].first;
			         for(ll k=0;k<y;k++)
				     v1.pb('U');
				 y=v2[i].second;




				}
			}
			for(ll i=0;i<v1.size();i++)
			cout<<v1[i];
		cout<<"\n";

		}

		
	}
	return 0;
}