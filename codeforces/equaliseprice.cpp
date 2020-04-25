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
		ll n,k,flg=0,mi=INT_MAX;
		cin>>n>>k;
		ll arr[n];

		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
			mi=min(mi,arr[i]);
		}
		sort(arr,arr+n);

		//for(ll i=0;i<n;i++)
		//{
			//cout<<arr[i]<<" ";
			//mi=min(mi,arr[i]);
		//}
		ll q=arr[0]+k;
		if((arr[n-1]-q)>k)
			cout<<"-1"<<endl;
		else
			cout<<q<<endl;
			
	

	}
	return 0;
}