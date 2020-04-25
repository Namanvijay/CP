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
		ll n,k,c=0,ans=0;
		string s;
		vector <char> v;
		
		cin>>n>>k;
		cin>>s;
		for(ll i=0;i<n;i++)
		{
			v.pb(s[i]);
		//	v[i]=s[i];
			
			
		}

		for(ll i=0;i<n-k+1;i++)
		{
			c=0;
			if(v[i]=='1')
			{
				v[i+k-1]='1';
				c=k;
				
				while(v[i+k]=='1' && i<n)
					{
						
						c++;
						i++;
					}

				
				

					ans=max(ans,c);
					
					
				


			}
			else 
				continue;
		}

		cout<<ans<<endl;

	}
	return 0;
}