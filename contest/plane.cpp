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
    ll n,m;
    cin>>n>>m;
    vec a(n),b(m),ci(m);
    for(ll i=0;i<n;i++)
    	cin>>a[i];
    for(ll i=0;i<m;i++)
    	cin>>b[i];
    sort(all(a));
    sort(all(b));
    ci=b;
    if(a[n-1]>b[m-1])
    	cout<<-1<<endl;
    else
    {
    	
    	ll t=0,c=0;
    	ll temp;
    	
    	ll x=1;
    	ll flg=0;
    	while(c<n)
    	{
    		
    		
    		auto it=lower_bound(b.begin(),b.end(),a[c]);
    		
    		if(it!=b.end() && b.size())
    		{
    			c++;
    			b.erase(it);
    		}
    		else
    		{
    			// x++;
    			break;
    			
    		}


    		

    	}
    	ll ans=0;
    	if(c==n)
    		cout<<x<<endl;
    	else
    	{
    		ll rem=(n-c);
    		ans+=2*x;
    		ans+=(2*rem-1);
    		cout<<ans<<endl;
    	}
    	// cout<<2*x-1<<endl;

    }

return 0;
}
