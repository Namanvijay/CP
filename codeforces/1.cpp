//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@

// COMPILE BY:) NAMAN


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
#define all(v) v.begin(),v.end()
#define infi LLONG_MAX
#define pi 3.141592653
#define memset(a,b) memset(a,(b),sizeof(a))
  
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin>>n>>k;
    vec v(n);
    for(ll i=0;i<n;i++)
    	cin>>v[i];
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
    	if((v[i]&v[k])!=0)
    	{
    		v[k]=v[k]|v[i];
    		ans++;
    		v[i]=0;
    		i=0;
    	}
    }

    cout<<ans<<endl;

return 0;
}
