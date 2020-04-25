//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mk make_pair
ll mod=pow(10,9)+7;
int main()
{
	ll n;
	cin>>n;
	string s;
	cin>>s;
	ll mi=0;
	ll ma=0;
	for(ll i=0;i<n;i++)
	{
		if(s[i]=='L')
			mi--;
		else 
			ma++;
	}
	ll ans=ma-mi+1;
	cout<<ans<<endl;
	return 0;
}