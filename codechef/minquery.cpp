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
void build(vector <ll> &tree,ll st,ll en,ll i,vec &v)
{
	if(st==en)
	{
		tree[i]=v[st];
	}

	else
	{
		ll mid=(st+en)/2;
		build(tree,st,mid,2*i,v);
		build(tree,mid+1,en,2*i+1,v);
		tree[i]=min(tree[2*i],tree[2*i+1]);
	}


} 

ll query(vec &tree,ll l,ll r,ll st,ll en,ll i)
{
	if(r<st || l>en)
		return INT_MAX;
	else if(l<=st && r>=en)
		return tree[i];
	else
	{
		ll mid=(st+en)/2;
		ll p1=query(tree,l,r,st,mid,2*i);
		ll p2=query(tree,l,r,mid+1,en,2*i+1);
		// cout<<"!!!!"<<p1<<" "<<p2<<endl;
		return min(p1,p2);
	}
}

void update(vec &tree,ll st,ll en,ll in,ll x,ll i,vec &v)
{
	if(st==en)
	{
		v[in]=x;
		tree[i]=x;

	}

	else
	{
		ll mid=(st+en)/2;
		if(in>=st && in<=mid)
			update(tree,st,mid,in,x,2*i,v);
		else
			update(tree,mid+1,en,in,x,2*i+1,v);

		tree[i]=min(tree[2*i],tree[2*i+1]);

	}

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ll t;

    // cin>>t;
    // while(t--)
    // {
        ll n,q;
        cin>>n>>q;
        vec v(n+1);
        for(ll i=1;i<=n;i++)
        	cin>>v[i];
        
        vec tree(4*n);
        build(tree,1,n,1,v);
        // for(ll i=1;i<=tree.size();i++)
        // 		cout<<tree[i]<<" ";
        // 	cout<<endl;
        while(q--)
        {
        	char c;
        	cin>>c;

        	ll l,r;
        	cin>>l>>r;

        	if(c=='q')
        	
        	cout<<query(tree,l,r,1,n,1)<<endl;
           else if(c=='u')
           {
           	  ll in=l;
           	  ll val=r;
           	  update(tree,1,n,in,val,1,v);
           }
        }
        

    // }
return 0;
}
		
