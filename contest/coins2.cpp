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
    vec v(n);
    for(ll i=0;i<n;i++)
    	cin>>v[i];
    sort(v.begin(),v.end());
    vec sum(x+1,0);
    for(ll i=0;i<n;i++)
    	sum[v[i]]=1;
    for(ll i=1;i<=x;i++)
    {
    	for(ll j=0;j<n && (i-v[j]>=0);j++)
    		sum[i]=sum[i]+sum[i-v[j]];
    	sum[i]%=mod;


    }

    for(ll i=1;i<=x;i++)
    	cout<<sum[i]<<" ";
    cout<<endl;


return 0;
}
