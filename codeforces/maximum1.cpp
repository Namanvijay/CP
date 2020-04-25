//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
ll dec(string s,ll n)
{
	ll b=0;
	ll m=0;
	for(ll i=0;i<n;i++)
	{
        
        m=m+pow(2,b)*(s[i]-'0');
        b++;
	}
	return m;
}
int main()
{
	ll n;
	cin>>n;
	string s;
	ll sum=0;
	ll ans=0;
	vector <ll> v;
	ll k;
	for(ll i=0;i<n;i++)
	{
		cin>>k;
		v.pb(k);
		sum=sum+v[i];

	}
	//cout<<"***"<<sum<<endl;
	cin>>s;
	for(ll i=n-1;i>=0;i--)
	{
		if(s[i]=='0')
		{
			sum=sum-v[i];
			//cout<<"^^^^"<<sum<<endl;
		}
		else
		{
			// cout<<"((("<<sum<<endl;
			 ll p=sum-v[i];
			// cout<<"***"<<p<<endl;
			 ans=max(ans,p);
			 //cout<<"^^^"<<ans<<endl;
		}

		
	}
	ans=max(ans,sum);
	cout<<ans<<endl;
	return 0;


	
 


}