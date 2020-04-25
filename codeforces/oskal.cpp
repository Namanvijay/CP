//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
	ll n;
	cin>>n;
	ll arr[n];
	for(ll i=0;i<n;i++)
		cin>>arr[i];
	ll k,a,b;
	cin>>k;
	for(ll i=0;i<k;i++)
	{
		cin>>a>>b;
		ll z=arr[a-1];
		//cout<<"!!!"<<arr[a-1]<<endl;
		if(a!=1)
		{
			arr[a-2]=arr[a-2]+(b-1);
			

		}
		arr[a-1]=arr[a-1]-b;
		if(a!=n)
		{
			arr[a]=arr[a]+z-b;
			
		}
		arr[a-1]=arr[a-1]-(z-b);
	}

	for(ll i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return 0;

}