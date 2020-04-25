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
		ll a,b;
		cin>>a>>b;
		if(a==b)
			cout<<0<<endl;

		else if(a%2==0 && b%2==1)
			cout<<1<<endl;
		else if(a%2==0 && b%2==0)
		{
			if(a>b)
				cout<<1<<endl;
			else cout<<2<<endl;
		}

		else if(a%2==1 && b%2==0)
		{
			if(a>b)
				cout<<2<<endl;
			else
				cout<<1<<endl;

		}

		else if(a%2==1 && b%2==1)
		{
			if(a>b)
				cout<<1<<endl;
			else 
				cout<<2<<endl;
		}
	}
	return 0;
}