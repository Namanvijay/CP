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
vec v[200100];
vec vis(200100,0),le(200100,0),sub(200100,0);
void dfs(ll u,ll n)
{

  vis[u]=1;
  sub[u]=1;


    
    for(ll i=0;i<v[u].size();i++)
    {
       ll x=v[u][i];
       // cout<<x<<endl;
       if(vis[x]==0)
       {
           le[x]=le[u]+1;
           dfs(x,n);
           sub[u]=sub[u]+sub[x];
       }

    }

    
}
  
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin>>n>>k;
    
    for(ll i=0;i<n-1;i++)
    {
      ll a,b;
      cin>>a>>b;
      v[a].pb(b);
      v[b].pb(a);
    }
    
    le[1]=1;
     // cout<<"((("<<endl;



    dfs(1,n);
    //   for(ll i=1;i<=n;i++)
    //   cout<<le[i]<<" ";
    // cout<<endl;
    // for(ll i=1;i<=n;i++)
    //   cout<<sub[i]<<" ";
    // cout<<endl;
    vec res(n);
    for(ll i=0;i<n;i++)
    {
      res[i]=le[i+1]-sub[i+1];
    }

    sort(res.begin(),res.end());
    reverse(res.begin(),res.end());
    for(ll i=0;i<res.size();i++)
      cout<<res[i]<<" ";
    cout<<endl;
    ll sum=0;
    for(ll i=0;i<k;i++)
      sum=sum+res[i];
    cout<<sum<<endl;


return 0;
}
