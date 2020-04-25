//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
ll mod=pow(10,9)+7;
int main()
{
	ll n,d,flg=1;
	cin>>n;
	vector <ll> v(n+1);
	for(ll i=0;i<n;i++)
		cin>>v[i];
	if(v[0]==50 || v[0]==100)
	{
		
		cout<<"NO"<<endl;
		return 0;

	}
		
	else
	
	{
		ll c25=1,c50=0;
		for(ll i=1;i<n;i++)
		{
			if(v[i]==25)
				c25++;
			else if(v[i]==50)
			{
				if(c25<1)
				{
					flg=0;
					break;
				}
				else
				{
					c25--;
					c50++;
				}
					
			}
			else
			{
				if(c25>=1 && c50>=1)
				{
					c25--;
					c50--;
				}
				else if(c25>=3)
					c25=c25-3;
				else
				{
					flg=0;
					break;
				}
			}
		}
	}
	if(flg==1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}