//@@@@@@@JAI BAJRANG BALI@@@@@@@@@@@
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
		ll n,k,a=0,b=0,c=0,d=0;
		vector <ll> v;
		cin>>n;
		for(ll i=0;i<n;i++)
		{
			cin>>k;
			v.pb(k);
		}
		ll s=n/4;
		sort(v.begin(),v.end());
		ll x=v[n/4];
		ll y=v[n/2];
		ll z=v[n/2+s];
		for(ll i=0;i<n;i++)
		{
			if(v[i]<x)
				d++;
			else if(v[i]>=x &&v[i]<y)
				c++;
			else if(v[i]>=y&& v[i]<z)
				b++;
			else if(v[i]>=z)
				a++;
		}
		if(a==s && b==s && c==s && d==s )
			cout<<x<<" "<<y<<" "<<z<<endl;
		else 
			cout<<"-1"<<endl;


	}
	return 0;
}