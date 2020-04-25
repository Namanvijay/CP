//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
	ll n,k,c=0;
	vector <ll> v;
	vector <ll> v1,v2;
	cin>>n;
	for(ll i=0;i<n;i++)
	{
		cin>>k;
		v.pb(k);
	}
	v1=v;
	sort(v1.begin(),v1.end());
	for(ll i=0;i<n;i++)
	{
		if((v[i]-v1[i])!=0)
		{
			v2.pb(i+1);
			c++;

		}
	}	
			
		if(c==2)
		{
            cout<<"yes"<<endl;
            cout<<v2[0]<<" "<<v2[1]<<endl;
		}
		else if(c==0)
		{
			cout<<"ye"<<endl;
			cout<<"1"<<" "<<"1"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}

	return 0;
}