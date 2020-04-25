

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define maxn 10000001
#define endl "\n"
#define inf INT_MAX
#define vec vector <ll>
#define mps map <ll,ll> 
#define ppl vector<pair<ll,ll>> 
#define fi first
#define si second
#define pr pair<ll,ll> 
#define mvec map<ll,vector <ll>>
#define all(v) v.begin(),v.end()

bool fun(pr &a,pr &b)
{
	if(a.fi!=b.fi)
	return a.fi>b.fi;
	else
		return a.si<b.si;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
    	ll n,k;
    	cin>>n>>k;
    	vec v(n+1);
    	for(ll i=1;i<=n;i++)
    		cin>>v[i];
    	vec ma;
    	for(ll i=2;i<=n-1;i++)
    	{
    		if(v[i]>v[i+1] && v[i]>v[i-1])
    			ma.pb(i);

    	}
    	if(ma.size()==0)
    		cout<<1<<" "<<1<<endl;
    	
    	
    	else
    	{
    		ll q=(n-k+1);
    	ppl vi;
    	for(ll l=1;l<=q;l++)
    	{
    		ll up=l+k-1;
    		// cout<<"***"<<up<<endl;
    		auto xx=lower_bound(ma.begin(),ma.end(),up);
    		auto yy=upper_bound(ma.begin(),ma.end(),l);
    		if(xx!=ma.begin() && yy!=ma.end())
    		{
    			*xx--;
    			ll v=yy-ma.begin();
    			ll w=xx-ma.begin();
    			ll aa=w-(v-1);
    			vi.pb(mp(aa,l));
    		}
    	}

    	sort(all(vi),fun);
    	cout<<vi[0].fi+1<<" "<<vi[0].si<<endl;

    	}
    	
    	



    }
return 0;
}
		
