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
bool fun(pair <ll,ll> &a,pair <ll,ll> &b)
{
	return a.second<b.second;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
         ll n,k;
         cin>>n>>k;
         vec v(n,0);
         for(ll i=0;i<n;i++)
         	cin>>v[i];
         mps m;
         for(ll i=0;i<n;i++)
         	m[v[i]]++;
          vector <pair <ll,ll>> vi;
          ll q=m.size();
          if(q<k)
          	cout<<n<<endl;
          else
          {

          	 for(auto it=m.begin();it!=m.end();it++)
         {
         	// cout<<it->first<<" "<<it->second<<endl;
         	vi.pb(mp(it->first,it->second));
         }
         sort(vi.begin(),vi.end(),fun);
         // for(ll i=0;i<vi.size();i++)
         	// cout<<vi[i].first<<" "<<vi[i].second<<endl;

         ll temp=vi[0].first;
         map <ll,vector <ll>> ma;
         for(ll i=0;i<n;i++)
         {
         	if(v[i]==temp)
         		ma[0].pb(i+1);

         }
         ll ans=INT_MIN;
         ll r;
         for(auto it=ma.begin();it!=ma.end();it++)
         {
         	r=it->second.size();
         	for(ll i=0;i<it->second.size()-1;i++)
         	{
         		ll p=ma[0][i+1]-ma[0][i]-1;
         		ans=max(ans,p);
         	}
         }

         ans=max(ans,ma[0][0]-1);
         ans=max(ans,n-ma[0][r-1]);
         cout<<ans<<endl;
          }
        
         	
        

    }
return 0;
}
		
