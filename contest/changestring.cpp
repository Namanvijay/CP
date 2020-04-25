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
    	string s;
    	cin>>s;
    	ll a=0,b=0;
    	for(ll i=0;i<s.length();i++)
    	{
    		if(s[i]=='A')
    			a++;
    		else
    			b++;
    	}

    	vector <vector <ll>>freq(n+1,vector <ll>(2,0));
    	vec dp(n+1);
    	dp[0]=n-b;
    	for(ll i=1;i<=n;i++)
    	{
    		for(ll j=0;j<2;j++)
    			freq[i][j]=freq[i-1][j];
    		freq[i][s[i-1]-'A']++;
    	}

    	// for(ll i=0;i<=n;i++)
    	// {
    	// 	for(ll j=0;j<2;j++)
    	// 		cout<<freq[i][j]<<" ";
    	// 	cout<<endl;
    	// }

    	for(ll i=1;i<=n;i++)
    	{
    		ll reqa=i-freq[i][0];
    		ll k=freq[n][1]-freq[i][1];
    		ll reqb=(n-i)-k;
    		dp[i]=reqa+reqb;


    	}

    	ll ans=inf;
    	for(ll i=0;i<=n;i++)
    		ans=min(ans,dp[i]);
    	cout<<ans<<endl;




    }
return 0;
}
		
