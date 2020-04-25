//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
	ll n;
	cin>>n;
	vector <ll> v;
	map <ll,vector<ll>> m;
	map <ll,ll> f;
	ll flg=0;
	for(ll i=0;i<2*n;i++)
	{
		ll k;
		cin>>k;
		v.pb(k);
	}

	vector <ll> v1;
	v1=v;
	sort(v1.begin(),v1.end());
	//for(ll i=0;i<2*n;i++)
		//cout<<"^^^"<<v1[i]<<" ";
	for(ll i=0;i<2*n;i++)
	{
		m[v[i]].pb(i+1);
		f[v[i]]++;

	}

	//for(auto it=f.begin();it!=f.end();it++)
		//cout<<it->first<<" "<<it->second<<endl;


	for(auto it=m.begin();it!=m.end();it++)
	{
		if(it->second.size()%2!=0)
		{
			flg=1;
			break;
		}
	}

	if(flg==0)
	{

		ll i=0;
		 while(i<2*n)
		{
                 ll fq=f[v1[i]];
                 ll r=m[v1[i]][0];
                // cout<<"^^^"<<r<<" ";
               //  cout<<"&&&"<<fq<<" ";
                
                 for(ll j=0;j<=fq-2;j+=2)
                 	cout<<m[v1[i]][j]<<" "<<m[v1[i]][j+1]<<endl;
                 i=i+fq;
                
		}
	}
	else
		cout<<"-1"<<endl;
	return 0;

}