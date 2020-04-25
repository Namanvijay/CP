 

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

#define si second
#define pr pair<ll,ll> 
#define mvec map<ll,vector <ll>>
#define all(v) v.begin(),v.end()
#define infi LLONG_MAX

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
    	ll xa,ra,a,b;
    	cin>>xa>>ra>>a>>b;
    	ll p=max(a,b);
    	if(p==a)
    	{
    		ll t=(a-b);
    		double ans=double(xa)*(t)/p;
    		if(floor(ans)==ceil(ans))
    			cout<<ans-1<<endl;
    		else
    			cout<<floor(ans)<<endl;
    	}
    	else
    	{
    		ll t=(b-a);
    		double ans=double(xa)*(t)/p;
    		if(floor(ans)==ceil(ans))
    			cout<<ans-1<<endl;
    		else
    			cout<<floor(ans)<<endl;

    	}

    }
return 0;
}
		
