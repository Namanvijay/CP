#include <bits/stdc++.h>
using namespace std;
#define mk make_pair
#define ll long long int
#define pb push_back
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,ans=0,c;
		cin>>n;
		string s;
		cin>>s;
		//ll i=0;
		for(ll i=0;i<n;i++)
		{
			if(s[i]=='A')
			{
				c=0;
				for(ll j=i+1;j<n;j++)
				{
					if(s[j]=='P')
						c++;
					else if(s[j]=='A')
						break;
				}

				ans=max(ans,c);


			}
		}
		cout<<ans<<endl;
	}
	return 0;
}