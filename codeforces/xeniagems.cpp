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
ll ans;
void fun(vec &a,vec &b,vec &c)
{
	for(ll i=0;i<b.size();i++)
	{
		auto it1=lower_bound(c.begin(),c.end(),b[i]);
		auto it2=upper_bound(a.begin(),a.end(),b[i]);
		if(it1==c.end() || it2==a.begin())
			continue;
		else
		{
			*it2--;
			ll q=((*it2-b[i])*(*it2-b[i])+(*it2-*it1)*(*it2-*it1)+(*it1-b[i])*(*it1-b[i]));
			ans=min(ans,q);
		}
	}

}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
    	ll r,g,b;
    	cin>>r>>g>>b;
    	vec ri(r),gi(g),bi(b);
    	for(ll i=0;i<r;i++)
    		cin>>ri[i];
    	for(ll i=0;i<g;i++)
    		cin>>gi[i];
    	for(ll i=0;i<b;i++)
    		cin>>bi[i];
    	ans=LLONG_MAX;
    	sort(ri.begin(),ri.end());
    	sort(gi.begin(),gi.end());
    	sort(bi.begin(),bi.end());
    	fun(gi,ri,bi);
    	fun(bi,ri,gi);
    	fun(ri,gi,bi);
    	fun(bi,gi,ri);
    	fun(ri,bi,gi);
    	fun(gi,bi,ri);
    	cout<<ans<<endl;



    }
return 0;
}
		
