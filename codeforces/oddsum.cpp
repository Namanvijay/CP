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
		ll n;
		cin>>n;
		ll sum=0;
		ll e=0,o=0;
		ll arr[n];
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]%2==0)
				e++;
			else o++;
		}

		if(o%2==0 && e==0)
			cout<<"NO"<<endl;
		else if(o==0 && e>0)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;

	
			

	}
	return 0;
}