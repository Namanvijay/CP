//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
ll mod=pow(10,9)+7;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll r,g,b;
		vector<ll> v;
		for(ll i=0;i<3;i++)
		{
			cin>>r;
			v.pb(r);
		}
		sort(v.begin(),v.end());
		if(v[2]-1>v[0]+v[1])
			cout<<"No"<<endl;
		else
			cout<<"Yes"<<endl;





	}
	return 0;

		
}