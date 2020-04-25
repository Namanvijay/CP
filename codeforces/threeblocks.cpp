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
    	vec v(n+1);
    	for(ll i=1;i<=n;i++)
    		cin>>v[i];
    	map <ll,set <ll>> m;
    	for(ll i=1;i<=n;i++)
    		m[v[i]].insert(i);
    	for(ll i=1;i<=n;i++)
    	{
    		ll q=m[v[i]].size();
    		if(q%2==0)
    		{
    			for(auto it=m[v[i]].begin();it!=m[v[i]].end();it++)
    			cout<<"***"<<endl;
    		}
    	}





    }
return 0;
}
		
