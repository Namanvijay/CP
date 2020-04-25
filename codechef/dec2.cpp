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
		ll n,k,c=0,a=0,ans=0,res=0;
		vector <ll> v;
		cin>>n;
		for(ll i=0;i<n;i++)
		{
			cin>>k;
			v.pb(k);
		}

		for(ll i=0;i<v.size();i++)
		{
			   if(v[i]==2)
				c++;
			if(v[i]==0)
				a++;
	          


		}

		if(c<2 && a<2)
			cout<<"0"<<endl;
		else
		{


                  if(c>=2)
		{

			 ll ans=c*(c-1)/2;
			 res=res+ans;
	
		}
		if(a>=2)
		{
            ll ans=a*(a-1)/2;
            res=res+ans;
		}
		cout<<res<<endl;

		}
		

		

	}
	return 0;
}