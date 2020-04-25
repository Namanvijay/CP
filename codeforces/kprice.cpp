//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,p,k,ans=0;
		cin>>n>>p>>k;
		vector <ll> v(n);
		for(ll i=0;i<n;i++)
		{
			cin>>v[i];
		}
		sort(v.begin(),v.end());
		vector <ll> dp(n+1,0);
		dp[0]=0;
		for(ll i=1;i<=n;i++)
		{
			dp[i]=dp[i-1]+v[i-1];
			if(i>=k)
			{
				dp[i]=min(dp[i],dp[i-k]+v[i-1]);
			}
			if(dp[i]<=p)
				ans=i;
			//if (dp[i]>p)
			//	break;
		}
		cout<<ans<<endl;
	}
}