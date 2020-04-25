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
    char arr[n][n];
    for(ll i=0;i<n;i++)
    {
    	for(ll j=0;j<n;j++)
    		cin>>arr[i][j];
    }

    ll dp[n][n]={0};
    for(ll i=0;i<n;i++)
    {
    	if(arr[i][0]=='.')
    		dp[i][0]=1;

    }

    for(ll j=0;j<n;j++)
    {
    	if(arr[0][j]=='.')
    		dp[0][j]=1;
    }

    // for(ll i=0;i<n;i++)
    // {
    // 	for(ll j=0;j<n;j++)
    // 		cout<<dp[i][j]<<" ";
    // 	cout<<endl;
    // }

    for(ll i=1;i<n;i++)
    {
    	for(ll j=1;j<n;j++)
    	{
    		if(arr[i][j]=='.')
    		dp[i][j]+=dp[i-1][j]+dp[i][j-1];
    	}
    }

    // for(ll i=0;i<n;i++)
    // {
    // 	for(ll j=0;j<n;j++)
    // 		cout<<dp[i][j]<<" ";
    // 	cout<<endl;
    // }

    cout<<dp[n-1][n-1]<<endl;

return 0;
}
