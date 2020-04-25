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
    	set <ll> s;
    	for(ll i=0;i<n;i++)
    	{
    		cin>>v[i];
    		s.insert(v[i]);
    	}
    	map <ll,ll> m;
    	for(ll i=0;i<n;i++)
    		m[v[i]]++;
    	ll an=INT_MIN;
    	for(ll i=0;i<m.size();i++)
    		an=max(an,m[i]);
    	// for(auto it=m.begin();it!=m.end();it++)
    	// {
    	// 	an=max(an,*it->second);
    	// }

    	// cout<<an<<endl;
    	ll ans;
    	ll q=s.size();
    	if(q==an)
    		ans=min(q,an-1);
    	else
    		ans=min(q,an);

    	cout<<ans<<endl;




    }
return 0;
}
		
