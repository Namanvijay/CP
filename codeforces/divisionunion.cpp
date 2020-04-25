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
bool fun(pair<pair<ll,ll> ,ll> &a,pair<pair<ll,ll>, ll> &b)
{
	if(a.first.first!=b.first.first)
	return a.first.first<b.first.first;
    else
    	return a.first.second<b.first.second;
}
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
             ll ti=n;
             vector <pair<pair<ll,ll>,ll>> v;

             for(ll i=0;i<n;i++)
             {
             	ll l,r;
             	
             	cin>>l>>r;
             	v.pb(mp(mp(l,r),i));

             }
             ll flg=0;
             


             sort(v.begin(),v.end(),fun);
             vec vi(ti,1);
            
             for(ll i=0;i<v.size()-1;i++)
             {
             	
             	// cout<<v[i].first.first<<" "<<v[i].first.second<<" "<<v[i].second<<endl;
             	if(v[i+1].first.first>v[i].first.second && flg==0)
             	{
             		ll temp=v[i+1].second;
             		vi[temp]=2;
             		flg=1;
             // 		// break;
             	} 

             	else if(v[i+1].first.first<=v[i].first.second && flg==1)
             	{
             	        ll p=v[i+1].second;
             	        ll q=v[i].second;
             		vi[p]=vi[q];
             	}

             // 	// else
             // 		// vi[i+1]=1;


             }

             if(find(vi.begin(),vi.end(),2)==vi.end())
             	cout<<"-1"<<endl;
             else
             {
             	// for(ll i=temp+1;i<n;i++)
             // // 		vi[i]=1;

             	for(ll i=0;i<ti;i++)
             		cout<<vi[i]<<" ";
             	cout<<endl;
             }
             	
    }
return 0;
}
		
