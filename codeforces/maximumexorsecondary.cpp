//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
	ll n,ans=0;
	cin>>n;
	vector <ll> v;
	for(ll i=0;i<n;i++)
	{
		ll k;
		cin>>k;
		v.pb(k);
	}

	stack <ll> s;
	for(ll i=0;i<n;i++)
	{
		while(!s.empty())
		{
			if(s.top()>v[i])
			{
				ans=max(ans,(s.top()^v[i]));
				break;
			}
			else
			{
				ans=max(ans,(s.top()^v[i]));
				s.pop();
			}

		}

		s.push(v[i]);
	}
	cout<<ans<<endl;
}