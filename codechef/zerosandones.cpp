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
void build(vec &tree,vec &v,ll st,ll en,ll i)
{
	if(st==en)
	{
		tree[i]=1;
	}
	else
	{
		ll mid=(st+en)/2;
		build(tree,v,st,mid,2*i);
		build(tree,v,mid+1,en,2*i+1);
		tree[i]=tree[2*i]+tree[2*i+1];
	}
} 
void update(vec &tree,vec &v,ll st,ll en,ll i,ll in)
{
	if(st==en &&(st==in))
	{
		tree[i]=0;
	}
	else
	{
		ll mid=(st+en)/2;
		if(in>=st && in<=mid)
		update(tree,v,st,mid,2*i,in);
	    else
		update(tree,v,mid+1,en,2*i+1,in);
		tree[i]=tree[2*i]+tree[2*i+1];
	}
}

ll query(vec &tree,ll st,ll en,ll b,ll i)
{
	if(tree[i]<b)
		return -1;
	else if(st==en && b==1)
		return st;
	else
	{
		ll mid=(st+en)/2;
		ll left=tree[2*i];
		ll right=tree[2*i+1];
		if(left<b)
		{
			query(tree,mid+1,en,b-left,2*i+1);
		}
		else
			query(tree,st,mid,b,2*i);
	}

}
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vec v(n+1);
    // for(ll i=1;i<=n;i++)
    	// cin>>v[i];
    for(ll i=1;i<=n;i++)
    	v[i]=1;
    vec tree(4*n);
    build(tree,v,1,n,1);
    ll q;
    cin>>q;
    while(q--)
    {
    	ll a,b;
    	cin>>a>>b;
    	if(a==0)
    		update(tree,v,1,n,1,b);
    	else
    	{
    		ll w=query(tree,1,n,b,1);
    		cout<<w<<endl;
    	}

    }


return 0;
}
