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
bool fun(pair <ll,ll>&a,pair <ll,ll>&b)
{
	return a.first>b.first;
if(a.first==b.first)
return a.second<b.second;

}

int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,k;
    cin>>n>>m>>k;
    ll arr[n+1][m+1];
   
    ll ans=0,rep=0;
     ll q=0;
    for(ll i=1;i<=n;i++)
    {
    	for(ll j=1;j<=m;j++)
    		cin>>arr[i][j];
    }

    for(ll j=1;j<=m;j++)
    {
    	 vector <pair <ll,ll>> v;
    	q=0;
    	for(ll i=1;i<=n;i++)
    	{
    		ll c=0;
    		if(arr[i][j]==1)
    		{
    			q++;
    			ll temp=i;
    			ll r=0;
    			// ll c=0;
    			while(r<min(k,(n-i+1)))
    			{
    				// cout<<"&&&"<<arr[temp][j]<<endl;

    				if(arr[temp][j]==1)
    				{
    					c++;
    					
    				}
    				r++;
    				temp++;

    			}
    			// cout<<"^^^"<<c<<" "<<q<<endl;
    			v.pb(mp(c,q));
    			c=0;

    		}


    	}
    	if(!v.empty())
    	{
    		sort(v.begin(),v.end(),fun);
    	    // cout<<"***"<<v[0].first<<endl;
    	    // cout<<"((("<<v[0].second-1<<endl;
    		ans=ans+v[0].first;
    		rep=rep+(v[0].second-1);
    		// v.clear();
    	

    	}

    	// for(ll i=0;i<v.size();i++)
    	// 	cout<<v[i].first<<" "<<v[i].second<<endl;
    	
    }

cout<<ans<<" "<<rep<<endl;
return 0;
}
