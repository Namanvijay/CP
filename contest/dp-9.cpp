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
    vec v(n);
    for(ll i=0;i<n;i++)
    	cin>>v[i];
    vector <vector <ll>> dp(n+1,vector <ll>(100001,0));
    // for(ll i=1;i<=n;i++)
    // {
    // 	for(ll j=0;j<=13;j++)
    // 		cout<<dp[i][j]<<" ";
    // 	cout<<endl;
    // }
    dp[0][0]=1;
    for(ll i=1;i<=n;i++)
    {
    	for(ll j=0;j<=100000;j++)
    	{
    		dp[i][j]=dp[i-1][j];
    		ll rem=j-v[i-1];
    	if(rem>=0 && dp[i-1][rem]==1 && dp[i][j]==0)
    		dp[i][j]=1;
    	}
    	
    }

    // for(ll i=1;i<=n;i++)
    // {
    // 	for(ll j=1;j<=13;j++)
    // 		cout<<dp[i][j]<<" ";
    // 	cout<<endl;
    // }
    set <ll> s;

    for(ll j=1;j<=100000;j++)
    {
    	if(dp[n][j]==1)
    		s.insert(j);

    }
    cout<<s.size()<<endl;
    for(auto it=s.begin();it!=s.end();it++)
    	cout<<*it<<" ";
    cout<<endl;




return 0;
}
