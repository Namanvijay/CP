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
    string a,b;
    cin>>a>>b;
    ll m=a.length();
    ll n=b.length();
    vector <vector <ll>>dp(m+1,vector <ll>(n+1,0));
    for(ll j=0;j<=n;j++)
    	dp[0][j]=j;
    for(ll i=0;i<=m;i++)
    	dp[i][0]=i;
    for(ll i=1;i<=m;i++)
    {
    	for(ll j=1;j<=n;j++)
    	{
    		if(a[i-1]==b[j-1])
    			dp[i][j]=dp[i-1][j-1];
    		else
    		{
    			dp[i][j]=1+min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
    		}
    	}

    }
    cout<<dp[m][n]<<endl;


return 0;
}
