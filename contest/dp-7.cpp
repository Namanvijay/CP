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
    ll n,x;
    cin>>n>>x;
    vec b(n+1),p(n+1);
    for(ll i=1;i<=n;i++)
    	cin>>b[i];
    for(ll i=1;i<=n;i++)
    	cin>>p[i];
    // ll dp[n+1][x+1]={0};
    ll dp[n+1][x+1];
    for(ll j=0;j<=x;j++)
    	dp[0][j]=0;
    // for(ll i=1;i<=n;i++)
    // {
    // 	for(ll j=0;j<=x;j++)
    // 		cout<<dp[i][j]<<" ";
    // 	cout<<endl;
    // }
    for(ll i=1;i<=n;i++)
    {
    	for(ll j=0;j<=x;j++)
    	{
    		dp[i][j]=dp[i-1][j];
    		// cout<<"((("<<dp[i][j]<<endl;
    		ll rem=j-b[i];
    		// cout<<"***"<<rem<<endl;
    		if(rem>=0)
    		{
    			dp[i][j]=max(dp[i][j],(dp[i-1][rem]+p[i]));
    			// cout<<")))"<<dp[i][j]<<endl;
    		}
    	}
    }

    // for(ll j=0;j<=x;j++)
    // 	cout<<dp[1][j]<<" ";

    cout<<dp[n][x]<<endl;

return 0;
}
