//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
ll m=pow(10,9)+7;
int main()
{
	ll n,m;
	cin>>n>>m;
	vector <ll> v,v1(100000,0);
	set <ll> s;
	for(ll i=0;i<n;i++)
	{
		ll k;
		cin>>k;
		v.pb(k);

	}

   for(ll i=n-1;i>=0;i--)
   {
   	s.insert(v[i]);
   	v1[i]=s.size();

   }
	for(ll i=0;i<m;i++)
	{
		ll p;
		cin>>p;
		cout<<v1[p-1]<<endl;


	}

return 0;
}

