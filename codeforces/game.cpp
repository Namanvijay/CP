//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

bool sortvalue( pair <char,ll> &a, pair <char,ll> &b)
{
	return a.second>b.second;
}
int main()
{
	ll n,k,max=0;
	cin>>n>>k;
	unordered_map <char,ll> m;
	char p;
	for(ll i=0;i<n;i++)
	{
         cin>>p;
         m[p]++;
	}

	vector <pair<char,ll>> v;
	for(auto it=m.begin();it!=m.end();it++)
	{
		v.pb(make_pair(it->first,it->second));
	}

	sort(v.begin(),v.end(),sortvalue);
	for(ll i=0;i<v.size();i++)
	{
		if(v[i].second<=k)
		{
                 max=max+((v[i].second)*(v[i].second));
                 k=k-v[i].second;
                 

		}

		else if(v[i].second>k)
		{
                   max=max+k*k;
                   k=0;
                   break;
		}

	}

	cout<<max<<endl;



	//for(auto it=m.begin();it!=m.end();it++)
	//{
	//	cout<<it->first<<" "<<it->second<<endl;
	//}

		
	return 0;
}