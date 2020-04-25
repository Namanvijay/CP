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
		ll x,y,a,b;
		cin>>x>>y>>a>>b;
		if((y-x)%(a+b)!=0)
			cout<<"-1"<<endl;
		else
			cout<<(y-x)/(a+b)<<endl;
	

	}
	return 0;
}