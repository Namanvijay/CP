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
#define inf INT_MAX
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
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n;
    	cin>>n;
    	ll temp=n;
    	n=n/2;
    	if(n%2!=0)
    		cout<<"NO"<<endl;
    	else
    	{
    		cout<<"YES"<<endl;
    		ll q=(n*(n+1));
    		ll p=(n-1)*(n-1);
    		ll rem=q-p;
    		vec v(temp+1);
    		ll c=2;
    		for(ll i=1;i<=n;i++)
    		{
    			v[i]=c;
    			c+=2;
    		}
    		c=1;

    		for(ll i=n+1;i<temp;i++)
    		{
    			v[i]=c;
    			c+=2;

    		}
    		v[temp]=rem;
    		for(ll i=1;i<=temp;i++)
    			cout<<v[i]<<" ";
    		cout<<endl;
    	}

    }
return 0;
}
		
