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
ll fun(ll n)
{
	ll t=n;
	ll c=0;
	if(n==0)
		return 1;
	else

	{
		while(t)
		{
			c++;
			t=t>>1;
		}
		ll count=0;
	
	// cout<<c<<endl;
	 

	for(ll i=0;i<c;i++)
	{
		if(n&(1<<i)==0)
			count++;
	}
	// cout<<"%%%"<<count<<endl;
	return count;
	}
	

	
}

int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vec v(n+1);
    v[0]=0;

    for(ll i=1;i<=n;i++)
    	cin>>v[i];
    ll z[n+1],e[n+1];
    e[0]=0;
    z[0]=0;
    for(ll i=1;i<=n;i++)
    {
    	e[i]=e[i-1]^v[i];
    	z[i]=z[i-1]+fun(v[i]);

    }

    // for(ll i=1;i<=n;i++)
    // 	cout<<e[i]<<" ";
    // cout<<endl;
    //  for(ll i=1;i<=n;i++)
    // 	cout<<z[i]<<" ";
    // cout<<endl;
    ll q;
    cin>>q;
    while(q--)
    {
    	ll l ,r;
    	cin>>l>>r;
    	ll ans=e[r]^e[l-1];
    	ll ze=z[r]-z[l-1];
    	cout<<ans<<" "<<ze<<endl;
    }

return 0;
}
