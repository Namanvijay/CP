//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
	ll n,k,m,s;
	cin>>n>>k;
	vector <ll> v(n,0);
	vector<ll> v1(n+1,0);
	cin>>s;
	ll i=0;
	while(s)
	{
		ll temp=s%10;
		v[n-i-1]=temp;
		s=s/10;
		i++;

	}
  ll j=0;
  ll s=v[0];
   	  v1[0]=s;
   	  v1[0+k]=v1[0];
   while(1)
   {
   	  



   }

	return 0;
}