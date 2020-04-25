//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
ll mod=pow(10,9)+7;
int main()
{
	ll n,c=1;
	cin>>n;
	ll arr[100010];
	vector<ll> v;
	ll m;
	cin>>m;
	arr[0]=m;
	for(ll i=1;i<n;i++)
	{
		ll k;
		cin>>arr[i];
		if(arr[i]>=arr[i-1])
		{

			c++;
			//cout<<"!!!!"<<arr[i]<<endl;
		//	cout<<"&&&&"<<arr[i-1]<<endl;

		}

		else
		{
			//cout<<"@@@@"<<c<<endl;
			v.pb(c);
			c=1;
		}
			//cout<<"$$$$"<<c<<endl;
	}
	v.pb(c);
	sort(v.begin(),v.end());
	ll z=v.size();
	cout<<v[z-1]<<endl;
	return 0;
}