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
ll exor(vector <ll> &v,ll n,ll m)
{
	ll ans=0;
	map <ll,ll> mi;
	mi[0]=0;mi[1]=0;
	vec vi(n);
    vi[0]=v[0];
    for(ll i=1;i<n;i++)
    	vi[i]=vi[i-1]^v[i];
   
    for(ll i=0;i<n;i++)
    {
    	ll x=vi[i]^m;
    	// cout<<"&&&"<<x<<endl;
    	ans=ans+mi[x];
    	// cout<<"(((("<<ans<<endl;
    	if(vi[i]==m)
    	{
    		ans++;
    		
    	}
    	mi[vi[i]]++;
    }
    return ans;
}  
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vec v(n);
    ll k=INT_MIN,ans;
   for(ll i=0;i<n;i++)
   cin>>v[i];
   k=exor(v,n,1);
  for(ll i=0;i<n;i++)
  {
  	if(v[i]==1)
  		v[i]=0;
  	else if(v[i]==0)
  		v[i]=1;
  	// for(ll i=0;i<n;i++)
  	// 	cout<<v[i]<<" ";
  	// cout<<endl;
  	ans=exor(v,n,1);
  	// cout<<"^^^"<<ans<<endl;
  	k=max(k,ans);
  	if(v[i]==1)
  		v[i]=0;
  	else
  		v[i]=1;

  }

  cout<<k<<endl;


    


return 0;
}
