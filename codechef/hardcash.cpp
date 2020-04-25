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
			ll ni=a%k;
			nik.pb(ni);
			if(ni%k==0)
				daal.pb(0);
			else
			{
				ll da=k-ni;
			daal.pb(da);
			}
			
		}
		//for(ll i=0;i<n;i++)
		
			//cout<<"((("<<daal[i]<<" ";
		
		//cout<<endl;
		//for(ll i=0;i<n;i++)
		
			//cout<<"))))"<<nik[i]<<" ";
		
		//cout<<endl;

		ll ds=accumulate(daal.begin(),daal.end(),0);
		//cout<<"^^^"<<ds<<endl;
		n1[0]=nik[0];
		//cout<<"***"<<n1[0]<<endl;
		for(ll i=1;i<n;i++)
		
             n1[i]=n1[i-1]+nik[i];
		
			//for(ll i=0;i<n;i++)
		
			//cout<<"$$$"<<n1[i]<<" ";

		d1[0]=ds-daal[0];
		

		for(ll i=1;i<n;i++)
		
			d1[i]=d1[i-1]-daal[i];
		
			


		ll an=INT_MAX;
		for(ll i=0;i<n;i++)
		{
			if(n1[i]-d1[i]>=0)
			{
			    an=min(an,(n1[i]-d1[i]));
			}

		}
		cout<<an<<endl;

		

	}
	return 0;
}