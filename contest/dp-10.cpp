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
    ll a,b;
    cin>>a>>b;
    vector <vector <ll>> dp(a+1,vector <ll>(b+1,0));
    for(ll i=1;i<=a;i++)
    	dp[i][1]=i-1;
    for(ll j=1;j<=b;j++)
    	dp[1][j]=j-1;
    // for(ll i=1;i<=a;i++)
    // {
    // 	for(ll j=1;j<=b;j++)
    // 		cout<<dp[i][j]<<" ";
    // 	cout<<endl;
    // }

    for(ll i=2;i<=a;i++)
    {
    	for(ll j=2;j<=b;j++)
    	{
    		if(i==j)
    			dp[i][j]=0;
    		else
    		{
    			ll q=min(i,j);
    			if(q==i)
    			{
    				dp[i][j]=1+dp[q][j-q];

    			}

    			else
    			{
    				dp[i][j]=1+dp[i-q][q];
    			}
    	
    		}
    	}
    }

    cout<<dp[a][b]<<endl;

return 0;
}
