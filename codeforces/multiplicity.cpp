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
#define ninf INT_MIN
#define ninfi LLONG_MIN
#define lbn lower_bound
#define ubn upper_bound
#define memset(a,b) memset(a,(b),sizeof(a))
  
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vec v(n+1);
    vec dp(n+1,0);
    dp[0]=1;
    for(ll i=1;i<=n;i++)
    	cin>>v[i];
    for(ll i=1;i<=n;i++)
    {
    	vec fac;
    	for(ll j=1;j<=sqrt(v[i]);j++)
    	{
    		if(v[i]%j==0)
    		{
    			fac.pb(j);
    			if(v[i]/j!=j)
    				fac.pb(v[i]/j);
    		}
    	}
    	sort(all(fac));
    	reverse(all(fac));
    	for(ll k=0;k<fac.size();k++)
    	{
    		if(fac[k]<=i)
    		{
    			ll q=fac[k];
    			dp[q]=dp[q]+dp[q-1];
    			dp[q]%=mod;
    		}

    	}

    }
    ll ans=0;

    for(ll i=1;i<=n;i++)
    {
    	ans+=dp[i];
    	ans%=mod;
    }
    ans%=mod;

    cout<<ans<<endl;



return 0;
}
