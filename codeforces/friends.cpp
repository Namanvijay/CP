//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
//@@@@@ COMPILED BY NAMAN VIJAYVARGIYA @@@@@@@
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
	vector <ll> v(n+1,0),v1,v2,v3;
	queue <ll> q;
	for(ll i=0;i<n;i++)
	{
		ll k;
		cin>>k;
		v1.pb(k);
	}
	for(ll i=0;i<n;i++)
	{
		if(v1[i]!=0)
		
			v[v1[i]]=1;
	else if(v1[i]==0)
			v2.pb(i+1);
		

	}
	for(ll i=1;i<=n;i++)
	{
            if(v[i]==0)
            	v3.pb(i);





}




	for(ll i=0;i<v3.size();i++)
	{
		if(v3[i]==v2[i] && i!=v3.size()-1)
			swap(v3[i],v3[i+1]);
		else
			if(v3[i]==v2[i] && i==v3.size()-1)
				swap(v3[i],v3[0]);
	}
	ll j=0;
	for(ll i=0;i<n;i++)
	{
		if(v1[i]!=0)
			cout<<v1[i]<<" ";
		else
		{
			cout<<v3[j]<<" ";
			j++;
		}
	}
  
	
	
	return 0;




}