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
#define ppl vector<pair<ll,ll>> 
#define fi first
#define si second
#define pr pair<ll,ll> 
#define mvec map<ll,vector <ll>>
  
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,x;
    cin>>n>>x;
    vec v(n+1);
    for(ll i=0;i<n;i++)
    	cin>>v[i];
    sort(v.begin(),v.end());

    vec sum(x+1,INT_MAX);
    for(ll i=0;i<n;i++)
    	sum[v[i]]=1;
    if(x<v[0])
    	cout<<-1<<endl;
    else
    {
    	for(ll k=v[0]+1;k<=x;k++)
    	{
    		for(ll i=0;i<n;i++)
    		{
    			ll diff=k-v[i];
    			if(diff<=0)
    				continue;
    			else
    			{
    				sum[k]=min(sum[k],sum[diff]+1);

    			}
    		}
    	}

    	// for(ll i=1;i<=x;i++)
    	// 	cout<<sum[i]<<" ";
    	// cout<<endl;

    	cout<<sum[x]<<endl;
    }




return 0;
}
