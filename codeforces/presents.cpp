//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
ll exp(ll a,ll b, ll m)
{
	if(a==0)
		return 0;
	else if(b==0)
		return 1;
	if(b%2==0)
	{
		ll y=exp(a,b/2,m);
		return (y*y)%m;
	}
	else 
	{
		ll y=a%m;
		ll z=exp(a,b-1,m);
		return (y*z)%m;
	}
}
int main()
{
	ll n,k;
	cin>>n>>k;
	ll ans;
	ll m=pow(10,9)+7;
	ans=exp(2,k,m)-1;
	ans=exp(ans,n,m);
	cout<<ans<<endl;
	return 0;

}