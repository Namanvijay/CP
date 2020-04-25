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
    ll n,m;
    cin>>n>>m;
    vec v(n);
    for(ll i=0;i<n;i++)
    	cin>>v[i];
    ll dp[n][m+1];
    for(ll i=0;i<n;i++)
    	for(ll j=1;j<=m;j++)
    		dp[i][j]=0;
    ll q=v[0];
    if(q==0)
    {
    	for(ll j=1;j<=m;j++)
    		dp[0][j]=1;

    }
    else
    	dp[0][q]=1;
    for(ll i=1;i<n;i++)
    {
    	if(v[i]==0)
    	{
    		for(ll j=1;j<=m;j++)
    		{
    			ll a=j-1;
    			ll b=j;
    			ll c=j+1;
    			if(a>=1 && a<=m)
    				dp[i][j]=dp[i][j]+dp[i-1][a];
    			if(b>=1 && b<=m)
    				dp[i][j]=dp[i][j]+dp[i-1][b];
    			if(c>=1 && c<=m)
    			{
    				dp[i][j]=dp[i][j]+dp[i-1][c];
    			}
    		}
    	}

    	else
    	{
    		ll a=v[i]-1;
    		ll b=v[i];
    		ll c=v[i]+1;
    		if(a>=1 && a<=m)
    				dp[i][v[i]]=dp[i][v[i]]+dp[i-1][a];
    			if(b>=1 && b<=m)
    				dp[i][v[i]]=dp[i][v[i]]+dp[i-1][b];
    			if(c>=1 && c<=m)
    			{
    				dp[i][v[i]]=dp[i][v[i]]+dp[i-1][c];
    			}

    	}

    }
    ll sum=0;

    for(ll j=1;j<=m;j++)
    	sum=sum+dp[n-1][j];

    cout<<sum<<endl;

return 0;
}
