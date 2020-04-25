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
#define ninf INT_MIN
#define ninfi LLONG_MIN
#define memset(a,b) memset(a,(b),sizeof(a))
  
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,k;
    cin>>n>>m>>k;
    vec a(n),b(m);
    for(ll i=0;i<n;i++)
    	cin>>a[i];
    for(ll i=0;i<m;i++)
    	cin>>b[i];
    vec v(n+1,0),vi(m+1,0);
    ll c=0;
    for(ll i=0;i<n;i++)
    {
    	if(a[i]==1)
    		c++;
    	else
    	{
    		// v[c]++;
    		for(ll j=1;j<=c;j++)
    		{
    			v[j]+=c-(j-1);

    		}
    		c=0;

    	}

    }
    // cout<<"***"<<c<<endl;
    // v[c]++;

    for(ll j=1;j<=c;j++)
    		{
    			v[j]+=c-j+1;

    		}
     c=0;

    for(ll i=0;i<m;i++)
    {
    	if(b[i]==1)
    		c++;
    	else
    	{
    		// vi[c]++;
    		for(ll j=1;j<=c;j++)
    		{
    			vi[j]+=c-j+1;
    		}
    		c=0;
    	}

    }
    // vi[c]++;

    for(ll j=1;j<=c;j++)
    		{
    			vi[j]+=c-j+1;

    		}
    // cout<<"((("<<c<<endl;		

    // for(ll i=1;i<=n;i++)
    // 	cout<<v[i]<<" ";
    // cout<<endl;

    //   for(ll i=1;i<=m;i++)
    // 	cout<<vi[i]<<" ";
    // cout<<endl;

   ll ans=0;
   for(ll i=1;i<=n;i++)
   {
   	  
   	   if(k%i==0)
   	   	{
   	   		ll q=k/i;
   	   		if(q<=m)
   	   			ans+=v[i]*vi[q];
   	   	}
   }

   cout<<ans<<endl;



return 0;
}
