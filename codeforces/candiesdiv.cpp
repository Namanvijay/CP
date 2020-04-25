//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mk make_pair
ll mod=pow(10,9)+7;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		if(n%k==0)
			cout<<n<<endl;
		else
		{

			ll p=n/k;
			ll z=k/2;
			p=p*k;
			if(n%k>z)
			{
				
			for(ll i=1;i<=z;i++)
				p=p+1;
			cout<<p<<endl;
			}

			else
			{
				
				cout<<n<<endl;
			}

		}

	}
	return 0;
}