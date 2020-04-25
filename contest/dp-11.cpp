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
  
    ll sum=(n*(n+1)/2);
    if(sum%2!=0)
    	cout<<0<<endl;
    else
    {
    	sum=sum/2;
    	cout<<sum<<endl;
    	vector <vector <ll>>dp(n+1,vector <ll>(sum+1,0));
    dp[0][0]=1;
    

    for(ll i=1;i<=n-1;i++)
    {
    	for(ll j=0;j<=sum;j++)
    	{
    		dp[i][j]=dp[i-1][j];
    		ll rem=j-i;
    		if(rem>=0)
    		dp[i][j]=dp[i-1][j]+dp[i-1][rem];
    	    dp[i][j]%=mod;
    	}
    }

    // for(ll i=1;i<=n-1;i++)
    // {
    // 	for(ll j=1;j<=sum;j++)
    // 		cout<<dp[i][j]<<" ";
    // 	cout<<endl;
    // }

    cout<<dp[n-1][sum]<<endl;
}



return 0;
}
