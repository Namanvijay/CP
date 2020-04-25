//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define maxn 10000001
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m,flg=0;
		cin>>n>>m;
		vector <ll> v,v1,v2,v3;
		for(ll i=0;i<n;i++)
		{
			ll a;
			cin>>a;
			v.pb(a);
		}
		for(ll i=0;i<m;i++)
		{
			ll b;
			cin>>b;
			v2.pb(b);
		}

		v1=v;
		sort(v1.begin(),v1.end());
		if(v1==v)
		{
			cout<<"YES"<<endl;

		}

			
		else
		{
			ll k=0;
			while(k<n)
			{
				for(ll i=0;i<n-1;i++)


			{



				if(v[i+1]<v[i])
					{
						//cout<<"!!"<<v[i]<<" "<<v[i+1]<<endl;
						if(find(v2.begin(),v2.end(),i+1)==v2.end())
						{
							flg=1;
							break;
						}
						else
							swap(v[i],v[i+1]);
					}

				

			}
				if(flg==0)
				{
					k++;
					continue;
				}
						
					else
						break;
		
			}
			

		

		

		if(flg==1)
			cout<<"NO"<<endl;
		else 
			cout<<"YES"<<endl;
	}
	}

	return 0;
}