//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
	ll n;
	cin>>n;
	vector <ll> v1;
	vector <ll> v2;
	ll a,b;
	for(ll i=0;i<n;i++)
	{
		cin>>a;
		v1.pb(a);
		cin>>b;
		v2.pb(b);
	}
	ll ev=0,od=0,ev1=0,od1=0;
	for(ll i=0;i<n;i++)
	{
		if(v1[i]%2==0)
			ev++;
		else 
			od++;

	}
	//ll ev=0,od=0,eva=0,oda=0;
	for(ll i=0;i<n;i++)
	{
		if(v2[i]%2==0)
			ev1++;
		else 
			od1++;

	}
	if(od%2==0 && od1%2==0)
		cout<<"0"<<endl;
	else if((od%2==0 && od1%2!=0) || (od%2!=0 && od1%2==0))
		cout<<"-1"<<endl;
	else if(od%2!=0 && od1%2!=0)
	{
		ll flg=0;
		for(ll i=0;i<n;i++)
		{
			if((v1[i]%2==0 && v2[i]%2!=0) || (v1[i]%2!=0 && v2[i]%2==0))
			{
				flg=1;
				break;
			}
		}
		if(flg==1)
			cout<<"1"<<endl;
		else
			cout<<"-1"<<endl;

	}
		

return 0;
}