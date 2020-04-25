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
		ll n;
		vector <ll> v;
		cin>>n;

		if(n%2==0)
		{
			ll k=n/2;
			for(ll i=0;i<k;i++)
				v.pb(1);
			for(ll i=0;i<k;i++)
				cout<<v[i];
			cout<<"\n";

		}
		else
		{
			
			v.pb(7);
			n=n-3;
			//cout<<"!!!!"<<n<<endl;
			ll k=n/2;
			for(ll i=0;i<k;i++)
			{
				v.pb(1);
				//cout<<"&&&";
			}
				
			for(ll i=0;i<k+1;i++)
				cout<<v[i];
			cout<<"\n";
		}

	}
	return 0;
}