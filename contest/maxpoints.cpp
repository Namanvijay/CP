//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
/********** code by naman *******/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define maxn 10000001
#define endl "\n"
#define im INT_MAX
#define vec vector <ll>
#define mps map <ll,ll>
#define ppl vector<pair<ll,ll>> 
#define fi first
#define si second
#define pr pair<ll,ll> 
#define mvec map<ll,vector <ll>>
  
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ppl v;
    for(ll i=0;i<n;i++)
    {
    	ll a,b;
    	cin>>a>>b;
    	v.pb(mp(a,b));
    }
    map <pr, ll> m;
    ll ans=0;

    for(ll i=0;i<n;i++)
    {
    	ll ov=0;
    	ll xx=0;
    	ll yy=0;
    	ll cur=0;

    	for(ll j=i+1;j<n;j++)
    	{
    		if(v[i]==v[j])
    			ov++;
    		else if(v[i].fi==v[j].fi && v[i].si!=v[j].si)
    			yy++;
    		else if(v[i].si==v[j].si && v[i].fi!=v[j].fi)
    			xx++;
    		else
    		{
    			ll y=v[j].si-v[i].si;
    			ll x=v[j].fi-v[i].fi;
    			ll g=__gcd(y,x);
    			y/=g;
    			x/=g;
    			m[mp(y,x)]++;

    			cur=max(cur,m[mp(y,x)]);
    			// cout<<cur<<" "<<j<<" "<<i<<endl;

    		}
    		
    	}
    	cur=max(yy,max(xx,cur));
    	// cout<<"&&&"<<cur<<endl;
    	ll p=cur+ov+1;
    	// cout<<"((("<<p<<endl;
    	ans=max(ans,p);
    	m.clear();




    }

    cout<<ans<<endl;

return 0;
}
