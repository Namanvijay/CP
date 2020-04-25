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
    ll n;
    cin>>n;
    vec v(n);
    for(ll i=0;i<n;i++)
    	cin>>v[i];
    ll q=10000000;
    sort(all(v));
    ll flg=0;
    ll c=0;
    ll sum=0;
    vec pre(n);
    pre[0]=v[0];
    ll ans;
    for(ll i=1;i<n;i++)
    	pre[i]=pre[i-1]+v[i];
    // for(ll i=0;i<n;i++)
    // 	cout<<pre[i]<<" ";
    // cout<<endl;
    if(pre[n-1]<q)
    	cout<<-1<<endl;
    else
    {
    	 for(ll i=0;i<n;i++)
    {
    	if(pre[i]<q)
    	{
    		continue;
    	}
    	else
    		{
    			ans=i+1;
    			break;
    		}
    }
    cout<<ans<<endl;

    }
   
   
return 0;
}
