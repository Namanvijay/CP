//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
ll mod=pow(10,9)+7;
bool sorting(pair<ll,ll> &a,pair<ll,ll> &b)
{
	if(a.first==b.first)
		return (a.second<b.second);
	return (a.first>b.first);


}

int main()
{
	ll n,k;
	vector <pair<ll,ll>>v;
	
	cin>>n>>k;
	for(ll i=0;i<n;i++)
	{
		ll k,p;
		cin>>k>>p;
		v.pb(make_pair(k,p));
	}

	sort(v.begin(),v.end(),sorting);

	//for(ll i=0;i<n;i++)
	//{
		//cout<<v[i].first<<" "<<v[i].second<<endl; 
	//}
	ll r=v[k-1].first;
	ll t=v[k-1].second;
	ll temp;
  for(ll i=0;i<n;i++)
  {
     if(v[i].first==r && v[i].second==t)
     {
     	temp=i;
     	break;

     }
     	
  }
  ll c=0;

  for(ll i=temp;i<n;i++)
  {
      if(v[i].first==r && v[i].second==t)
      	c++;
  }

  cout<<c<<endl;

	return 0;
}