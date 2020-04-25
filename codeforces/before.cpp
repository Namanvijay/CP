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
		ll h,m;
		ll ans=0;
		cin>>h>>m;
		ans=(23-h)*60+(60-m);
		cout<<ans<<endl;
	}
	return 0;
}