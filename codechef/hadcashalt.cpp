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
		ll n,k;
		cin>>n>>k;
		vector <ll> v1;
			vector <ll> nik,daal;
			ll n1[n],d1[n];

		for(ll i=0;i<n;i++)
		{
			ll a;
			cin>>a;
			v1.pb(a);
			//ll ni=a%k;
			//nik.pb(ni);
			//if(ni%k==0)
			//	daal.pb(0);
			//else
			//{
			//	ll da=k-ni;
			//daal.pb(da);
			//}
			
		}
		//for(ll i=0;i<n;i++)
		
			//cout<<"((("<<daal[i]<<" ";
		
		//cout<<endl;
		//for(ll i=0;i<n;i++)
		
			//cout<<"))))"<<nik[i]<<" ";
		
		//cout<<endl;
		ll sum=0;
		for(ll i=0;i<n;i++)
		{
			sum=sum+v1[i];
		}

		//ll ds=accumulate(v1.begin(),v1.end(),0);
		//cout<<sum<<endl;
		
		ll ans=sum%k;
		cout<<ans<<endl;
	}
	return 0;
}