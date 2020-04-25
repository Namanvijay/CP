//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
bool fun(pair< long double,ll> &a,pair< long  double,ll> &b)
{
	if(a.first==b.first)
		return a.second<b.second;
	return a.first<b.first;


}

int main()
{
	string s;
	cin>>s;
	long double arr[2];
	arr[0]=0;
	arr[1]=1;
	 long double k;
	vector <pair<long double,ll>> v;
	for(ll i=0;i<s.length();i++)
	{
            if(s[i]=='l')
            {
            	k=( long double)(arr[0]+arr[1])/2;
            	arr[1]=k;
            	v.pb(mp(k,i+1));
            }
            else
            {
            	k=(long double)(arr[0]+arr[1])/2;
            	arr[0]=k;
            	v.pb(mp(k,i+1));
            }
	}

	sort(v.begin(),v.end(),fun);

	//for(ll i=0;i<v.size();i++)
		//cout<<v[i].first<<" "<<v[i].second<<endl;

	for(ll i=0;i<v.size();i++)
		cout<<v[i].second<<" ";
	return 0;
}