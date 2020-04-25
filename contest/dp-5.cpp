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
    vec dp(n+1,0);
    // dp[0]=0;
    for(ll i=1;i<=n;i++)
    {
    	ll temp=i;
    	ll ma=0;
    	while(temp)
    	{
    		ll r=temp%10;
    		ma=max(ma,r);
    		temp=temp/10;
    	}
    	ll q=i-ma;
    	// cout<<"***"<<q<<endl;
    	dp[i]=dp[q]+1;
    }

    cout<<dp[n]<<endl;

return 0;
}
