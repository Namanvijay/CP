//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@

/************** Code by naman ******/

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
int expomod(ll a, ll b, ll c)  
{  
    
    if (a == 0)  
        return 0;  
    if (b == 0)  
        return 1;  
  
     
    ll y;  
    if (b % 2 == 0) {  
        y = expomod(a, b / 2, c);  
        y = (y * y) % c;  
    }  
  
    
    else {  
        y = a % c;  
        y = (y * expomod
        	(a, b - 1, c) % c) % c;  
    }  
  
    return y;
}  
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {

    	ll n,k,p,q;
    	cin>>n>>k>>p>>q;
    	ll dp[n][2]={0};
    	if(p==q)
    	{
    		dp[0][1]=1;
    		dp[0][0]=0;
    	}
    	else if(p!=q)
    	{
    		dp[0][1]=0;
    		dp[0][0]=1;
    	}

    	for(ll i=1;i<n;i++)
    	{
    		dp[i][1]=dp[i-1][0];
    		dp[i][0]=((dp[i-1][1]*(k-1))%mod+(dp[i-1][0]*(k-2))%mod)%mod;

    	}

    	cout<<dp[n-1][1]<<endl;
    	





    }
return 0;
}
		
