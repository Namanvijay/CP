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
vec v[100100];
vec vis(100100,0);
ll ans;
ll temp=LLONG_MAX;
ll col[4][100100];


void dfs(ll u,vec &ch)
{
	// cout<<"***"<<endl;
	vis[u]=1;
	ch.pb(u);
	for(ll i=0;i<v[u].size();i++)
	{
		ll x=v[u][i];
		if(vis[x]==0)
			dfs(x,ch);
	}
}

void fun(ll st,ll mid,ll en,vec &ch,vec &fin,ll n)
{
	ll ans=0;
    
    vec rang(n+1);
    rang[1]=st;
    rang[2]=mid;
    rang[3]=en;
    for(ll i=4;i<=n;i++)
    	rang[i]=6-rang[i-1]-rang[i-2];
   
    for(ll i=0;i<ch.size();i++)
    	ans+=col[rang[i+1]][ch[i]];
    // cout<<"***"<<ans<<endl;
    if(ans<temp)
    {
    	temp=ans;
    	for(ll i=1;i<=n;i++)
    	{
    		fin[ch[i-1]]=rang[i];
    	}
    }
}

  
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll flg=0;
   
    for(ll i=1;i<=3;i++)
    {
    	for(ll j=1;j<=n;j++)
    		cin>>col[i][j];
    }

    for(ll i=0;i<n-1;i++)
    {
    	ll u,vi;
    	cin>>u>>vi;
    	v[u].pb(vi);
    	v[vi].pb(u);
    }
    for(ll i=1;i<=n;i++)
    {
    	ll q=v[i].size();
    	if(q>=3)
    	{
    		flg=1;
    		break;
    		// cout<<"-1"<<endl;
    	}
    }
    if(flg==1)
    	cout<<-1<<endl;
    else
    {
    	vec ch;
    	dfs(1,ch);
    	// for(ll i=0;i<ch.size();i++)
    	// 	cout<<ch[i]<<" ";
    	// cout<<endl;
    	vec fin(n+1);

    	fun(1,2,3,ch,fin,n);
    	fun(3,2,1,ch,fin,n);
    	fun(2,1,3,ch,fin,n);
    	fun(3,1,2,ch,fin,n);
    	fun(1,3,2,ch,fin,n);
    	fun(2,3,1,ch,fin,n);
    	cout<<temp<<endl;
    	for(ll i=1;i<=n;i++)
    		cout<<fin[i]<<" ";
    	cout<<endl;

    }


return 0;
}
