//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mk make_pair

ll bs(vector <ll> &v,ll l,ll h,ll x)
{
	if(h>=l)
	{
		ll mid=(l+h)/2;
	if(v[mid]==x)
		return mid;
	if(v[mid]>x)
		return bs(v,l,mid-1,x);
	return bs(v,mid+1,h,x);
	}
	return -1;
		

}

ll mod=pow(10,9)+7;
int main()
{
	ll qr;
	cin>>qr;
	while(qr--)
	{
		ll n,s,k;
		cin>>n>>s>>k;
		vector <ll> v;
		for(ll i=0;i<k;i++)
		{
			ll t;
			cin>>t;
			v.pb(t);
		}
		ll j=0;
		while(1)
		{
			if((s-j)>=1 && find(v.begin(),v.end(),s-j)==v.end())
				break;
			if((s+j)<=n && find(v.begin(),v.end(),s+j)==v.end())
				break;
			j++;
		}
		cout<<j<<endl;
	}
	return 0;
}
	