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
		tree[i]=v[st];
	}
	else
	{
		ll mid=(st+en)/2;
		build(tree,v,st,mid,2*i);
		build(tree,v,mid+1,en,2*i+1);
		tree[i]=min(tree[2*i],tree[2*i+1]);
	}
} 
void update(vec &tree,vec &v,ll st,ll en,ll i,ll a)
{
	if(st==en)
	{
		if(tree[i]>a)
		// // v[st]=v[st]-1;
		tree[i]=tree[i]-1;
	}
	else
	{
		// if(tree[i]>a)
		// 	tree[i]=tree[i]-1;
		ll mid=(st+en)/2;
		// if(in>=st && in<=mid)
		update(tree,v,st,mid,2*i,a);
	    // else
		update(tree,v,mid+1,en,2*i+1,a);
		tree[i]=min(tree[2*i],tree[2*i+1]);
	}
}

void print(vec &tree,ll st,ll en,ll i)
{
	if(st==en)
		cout<<tree[i]<<" ";
	else
	{
		ll mid=(st+en)/2;
		print(tree,st,mid,2*i);
		print(tree,mid+1,en,2*i+1);

	}
}


int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vec v(n+1);
    for(ll i=1;i<=n;i++)
    	cin>>v[i];
    // for(ll i=1;i<=n;i++)
    	// v[i]=1;
    vec tree(4*n);
    build(tree,v,1,n,1);
 
    ll q;
    cin>>q;
    while(q--)
    {
    	ll a;
    	cin>>a;
    	
    		update(tree,v,1,n,1,a);

    // 		 for(ll i=1;i<=tree.size();i++)
    // 	cout<<tree[i]<<" ";
    // cout<<endl;


    	
    }

     print(tree,1,n,1);
    

return 0;
}
