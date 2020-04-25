//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
ll dec(string s,ll n)
{
	ll b=0;
	ll m=0;
	for(ll i=0;i<n;i++)
	{
        
        m=m+pow(2,b)*(s[i]-'0');
        b++;
	}
	return m;
}
int main()
{
	ll n;
	cin>>n;
	string s;
	vector <ll> v;
	ll k;
	for(ll i=0;i<n;i++)
	{
		cin>>k;
		v.pb(k);

	}
	cin>>s;
	
   ll m=dec(s,n);
  // cout<<m<<endl;
   ll c=pow(2,n-1);
  // cout<<"***"<<c<<endl;
   ll dp[c];
   for(ll i=0;i<c;i++)
   	dp[i]=0;

  
  
   for(ll i=0;i<n;i++)
   {
   	 ll y=pow(2,i); 
   	   dp[y]=v[i];
   }

  // for(ll i=0;i<c;i++)
   	//cout<<dp[i]<<" ";
   dp[0]=0;
   for(ll i=3;i<m;i++)
   {
   	  ll x=log2(i);
   	  x=pow(2,x);
   	  ll rem=i-x;
   	  dp[i]=dp[x]+dp[rem];
   }
   ll ans=0;
   for(ll i=0;i<=m;i++)
   {
   	  ans=max(ans,dp[i]);
   }
   cout<<ans<<endl;
   return 0;


}