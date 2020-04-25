//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

ll factors(ll d)
{
	vector <ll> v;
	for(ll i=1;i<=sqrt(d);i++)
	{
		if(d%i==0)
		{


			v.pb(i);
			//cout<<"$$$"<<i<<endl;
			if(i!=d/i)
		{
			v.pb(d/i);
			//cout<<"!!!!"<<d/i<<endl;
		}
		}

			
	}
	//for(ll i=0;i<v.size();i++)
	//	cout<<v[i]<<" ";
	//cout<<"\n";
	return v.size();
}

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		ll d=abs(a-b);
		cout<<factors(d)<<endl;

	}
	return 0;
}