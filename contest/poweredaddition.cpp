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
    	vec v(n);
    	for(ll i=0;i<n;i++)
    		cin>>v[i];
    	ll ans=INT_MIN;
    	ll flg=0;
    	for(ll i=0;i<n-1;i++)
    	{
    		if(v[i+1]<v[i])
    		{
    			flg=1;
    			ll diff=v[i]-v[i+1];
    			diff++;
    			ll k=ceil(log2(diff));
    			ans=max(ans,k);
    			v[i+1]=v[i];
    		}
    	}
    	if(flg==0)
    		cout<<0<<endl;
    	else

    	cout<<ans<<endl;
    }	

return 0;
}
		
