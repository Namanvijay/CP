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
		ll a,b,n,p,sum=0;
		vector<int> v(12,-1);
		cin>>n;
		for(ll i=0;i<n;i++)
		{
			cin>>a>>b;
			if(v[a]==-1 && a<=8)
			{
				v[a]=b;
			}
			else if(v[a]!=-1 && a<=8)
			{
				if(b>=v[a] )
				{
					v[a]=b;
				}
			}
		}

		for(ll i=0;i<v.size();i++)
		{
			if(v[i]!=-1)
			{
				sum=sum+v[i];
			}
			
		}
		cout<<sum<<endl;

	}
	return 0;
}