//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
	ll n;
	cin>>n;
	string s;
	vector <string> v;
	for(ll i=0;i<n;i++)
	{
          cin>>s;
          v.pb(s);
	}
	//for(ll i=0;i<n;i++)
		//cout<<"^^"<<v[i]<<endl;
	//cout<<"((("<<v[0][0]<<endl;
	ll c=1;
	for(ll i=0;i<n-1;i++)
	{
		if(v[i][1]==v[i+1][0])
			c++;
	}
	cout<<c<<endl;
	return 0;
}