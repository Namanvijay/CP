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
bool fun(pr &a,pr&b)
{
	return a.first<b.first;
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
    	vec v(n);
    	for(ll i=0;i<n;i++)
    		cin>>v[i];
    	vec vi;
    	for(ll i=0;i<n/2;i++)
    	{
    		ll sum=v[i]+v[n-i-1];
    		vi.pb(sum);
    		

    	}
    	
    	sort(all(vi));
    	for(ll i=0;i<vi.size();i++)
    		cout<<vi[i]<<" ";
    	cout<<endl;
    	
    	if(n%4!=0)
    	{
    		ll ans=0;
    		ll x=vi.size();
    		ll mid=vi[x/2];
    		for(ll i=0;i<n/2;i++)
    		{
    			ll diff=mid-(v[i]+v[n-i-1]);
    			if(diff>0)
    			{
    				ll q=min(v[i],v[n-i-1]);
    				if(diff<=(k-q))
    					ans++;
    				else
    					ans+=2;
    			}
    			else if(diff<0)
    			{
    				ll q=max(v[i],v[n-i-1]);
    				if(diff<=(q-1))
    				ans++;
    				else
    					ans+=2;
    			}
    		}

    		cout<<ans<<endl;
    	}
   
    	
    	else
    	{
    		 ll ans;
    		ll ans1=0;
    		ll x=vi.size();
    		ll mid=vi[x/2];
    		// cout<<"***"<<mid<<endl;
    		for(ll i=0;i<n/2;i++)
    		{
    			ll diff=mid-(v[i]+v[n-i-1]);
    			// cout<<"^^^"<<diff<<endl;
    			if(diff>0)
    			{
    				ll q=min(v[i],v[n-i-1]);
    				if(diff<=(k-q))
    					ans1++;
    				else
    					ans1+=2;
    			}
    			else if(diff<0)
    			{
    				ll q=max(v[i],v[n-i-1]);
    				if(abs(diff)<=(q-1))
    				ans1++;
    				else
    					ans1+=2;
    			}
    		}
    		// cout<<"@@"<<ans1<<endl;

    		ll ans2=0;
    		 mid=vi[x/2-1];
    		 // cout<<"((("<<mid<<endl;
    		for(ll i=0;i<n/2;i++)
    		{
    			ll diff=mid-(v[i]+v[n-i-1]);
    			// cout<<"&&&"<<diff<<endl;
    			if(diff>0)
    			{
    				ll q=min(v[i],v[n-i-1]);
    				if(diff<=(k-q))
    					ans2++;
    				else
    					ans2+=2;
    			}
    			else if(diff<0)
    			{
    				ll q=max(v[i],v[n-i-1]);
    				if(abs(diff)<=(q-1))
    				ans2++;
    				else
    					ans2+=2;
    			}
    		}
    		// cout<<ans1<<endl;

    		// cout<<ans2<<endl;

    		ans=min(ans1,ans2);
    		cout<<ans<<endl;




    	}

    	

    }
return 0;
}
		
