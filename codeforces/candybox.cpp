//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define maxn 10000001
bool fun(pair <ll,ll> &a,pair <ll,ll> &b)
{
	return a.second>b.second;
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll arr[n];
			map <ll,ll> m;
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
			m[arr[i]]++;
		}
			
	
		vector <pair<ll,ll>> v;

		for(auto it=m.begin();it!=m.end();it++)
		{
			v.pb(mp(it->first,it->second));
		}

		sort(v.begin(),v.end(),fun);
		ll ans=0;
		vector <ll> v1(v[0].second+1,0);
		//for(ll i=0;i<v1.size();i++)
			//cout<<v1[i]<<endl;
		for(ll i=0;i<v.size();i++)
		{
			if(v1[v[i].second]==0)
			{
				ans=ans+v[i].second;
				//cout<<"***"<<ans<<endl;
				v1[v[i].second]=1;
			}
			else
			{
				if(v[i].second==1)
					break;
				ll j=1;
			//	cout<<"!!!"<<endl;
				while(1)
				{
					v[i].second=v[i].second-1;
					//cout<<"%%%"<<v[i].second<<endl;
					if(v1[v[i].second]==0)
					{
						ans=ans+v[i].second;
						//cout<<"(((("<<ans<<endl;

						v1[v[i].second]=1;
						break;
					}
					j++;
					
				}
			}
		}
		
	

		cout<<ans<<endl;
			

	}
	return 0;
}