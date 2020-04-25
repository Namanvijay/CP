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

	    set <ll> s;
	    for(ll i=0;i<v.size();i++)
	    {
	    	for(ll j=v[i].second;j>=0;j--)
	    	if(s.find(j)==s.end())
	    	{
	    		s.insert(j);
	    		break;

	    	}
	    		
	    }

	    for(auto it=s.begin();it!=s.end();it++)
	    	ans=ans+(*it);
	    cout<<ans<<endl;

			

		
	

		
			

	}
	return 0;
}