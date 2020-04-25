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
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
                 
           ll n,m;
           cin>>n>>m;
           ll ans=INT_MAX;
           vec v(n);
           vec v1(n);
           for(ll i=0;i<n;i++)
           	cin>>v[i];
           for(ll i=0;i<n;i++)
           	cin>>v1[i];
           map <ll,vector <ll>> ma;
           for(ll i=0;i<n;i++)
           {
           	  ma[v[i]].pb(v1[i]);
           }

           for(auto it=ma.begin();it!=ma.end();it++)
           {
           	   // cout<<it->first<<" ";
           	   ll sum=0;
           	  for(ll i=0;i<it->second.size();i++)
           	  	sum=sum+it->second[i];

           	   ans=min(ans,sum);
           	  	// cout<<it->second[i]<<" ";
           	  // cout<<endl;

           }

           cout<<ans<<endl;

    }
return 0;
}
		
