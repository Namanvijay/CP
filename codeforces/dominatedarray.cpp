//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@

// COMPILE BY:) NAMAN 

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
#define infi LLONG_MAX
#define pi 3.141592653
#define memset(a,b) memset(a,(b),sizeof(a))
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n;
    	cin>>n;
    	vec v(n+1);
    	for(ll i=1;i<=n;i++)
    		cin>>v[i];
    	mvec m;
    	ll flg=0;
    	ll ans=inf;
    	for(ll i=1;i<=n;i++)
    		m[v[i]].pb(i);

    	for(auto it=m.begin();it!=m.end();it++)
    	{
    		if(it->second.size()==1)
    		continue;
    	else
    	{
    		flg=1;
    		for(ll i=0;i<it->second.size()-1;i++)
    		{
    			ll diff=it->second[i+1]-it->second[i];
    			ans=min(ans,diff);

    		}
    	}

    	}

    	if(flg==0)
    		cout<<-1<<endl;
    	else
    		cout<<ans+1<<endl;

    }
return 0;
}
		
