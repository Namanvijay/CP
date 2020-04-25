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
bool fun(pr &a,pr&b)
{
	return a.fi<b.si;

}

 
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
    	   	vector <char> s(n),t(n);
    	for(ll i=0;i<n;i++)
    		cin>>s[i];
    	for(ll i=0;i<n;i++)
    		cin>>t[i];
    	vec f(n),b(n);
    	for(ll i=0;i<n;i++)
    		cin>>f[i];
    	for(ll i=0;i<n;i++)
    		cin>>b[i];
    	// vec vis(n,0);
    	ll flg=0;
    	for(ll i=0;i<n;i++)
    	{
    		if(s[i]!=t[i])
    		{
    			flg=1;
    			break;
    		}
    	}
    	if(flg==1)
    		cout<<"cannot be formed"<<endl;
    	else
    	{
    		ll sum=0;
    		ll ans;
    		for(ll i=1;i<n;i++)
    			sum+=b[i];
    		ll a1=sum+f[0];
    		ll a2=sum+b[0];
    		ans=min(a1,a2);
    		cout<<ans<<endl;
    	}
    
    }
return 0;
}
		
