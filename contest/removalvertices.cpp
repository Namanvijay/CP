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
ll fun(ll n) 
{ 
    
    ll p = 1; 
    while (p <= n) 
        p *= 2; 
  
 
    return (2 * n) - p + 1; 
} 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {

    	ll n,k;
    	cin>>n>>k;
    	ll q=2+(2*k);
    	ll rem=q%n;
    	if(rem==0)
    		rem=n;
    	ll ans;
    	// cout<<rem<<endl;

    	if(rem==1)
    	{
    		ll q=fun(n);
    		ans=q-1;
    		if(ans==0)
    			ans=n;
    		cout<<ans<<endl;

    	}
    	else
    	{
    		ll diff=rem-2;
    		ll q=fun(n);
    		ans=q+diff;
    		ans%=n;
    		if(ans==0)
    			ans=n;
    		cout<<ans<<endl;
    	}




    }
return 0;
}
		
