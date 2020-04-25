#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
	ll n,k,x1=0,sum=0,y1,d1;
	vector<ll> v;
	cin>>n;
	for(ll i=0;i<n;i++)
	{
		cin>>k;
		v.pb(k);
	}
	sort(v.begin(),v.end());
	for(ll i=0;i<=n/2-1;i++)
	{
		x1=x1+v[i];
	}


	//for(ll i=0;i<n;i=i+4)
	//{
	//	x1=x1+v[i]+v[i+1];
	//}

	sum=accumulate(v.begin(),v.end(),0);
	y1=sum-x1;
	d1=x1*x1+y1*y1;
	cout<<d1<<endl;
	//y1=sum-x1;
	//for(ll i=1;i<n;i=i+4)
	//{
	//	y2=y2+v[i]+v[i+1];
	//}
	//x2=sum-y2;
	//ll d1=x1*x1+y1*y1;
	//ll d2=x2*x2+y2*y2;
	//ll ans=max(d1,d2);
	//cout<<ans<<endl;
	//cout<<x<<endl;
	return 0;


}