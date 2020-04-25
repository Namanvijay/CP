//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
	ll n;
	cin>>n;
	ll ans=0;
	for(ll i=1;i<=n;i++)
	{
		for(ll j=i+1;j<=n;j++)
		{
			ll c=sqrt(i*i+j*j);
			if((c*c==(i*i+j*j))&& c<=n)
				ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}