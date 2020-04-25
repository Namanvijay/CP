//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
ll mod=pow(10,9)+7;
int main()
{
	ll n,a,b,c;
	cin>>n>>a>>b>>c;
	ll ans=0;
	ll p=max(a,max(b,c));
	for(ll i=0;i<=(n/a);i++)
	{
		for(ll j=0;j<=(n/b);j++)
		{
			ll z=(n-(a*i+b*j))/c;
			if(z<0)
				continue;
			else
			{
				if(a*i+b*j+c*z==n)
				{//cout<<i<<" "<<j<<" "<<z<<endl;
			ans=max(ans,i+j+z);
				

				}
					
			}
		}
	}
	cout<<ans<<endl;

	return 0;

}