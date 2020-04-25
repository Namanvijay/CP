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
		ll n,sum1=0,sum2=0;
		cin>>n;
		vector<ll> v(n+10);
		vector <ll> h(n+10);
		for(ll i=1;i<=n;i++)
		{
              cin>>v[i];

		}
		for(ll i=1;i<=n;i++)
		{
			cin>>h[i];
			sum2=sum2+h[i];
		}

		for(ll i=1;i<=n;i++)
		{
			ll p=(i-v[i]);
			if(p<=0)
				p=1;
			ll k=i+v[i];
			if(k>=n)
				k=n;
			sum1=sum1+(k-p)+1;
		}
		if(sum1==sum2)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
			
	}
	return 0;
}