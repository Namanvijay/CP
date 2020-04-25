//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
int main()
{
	string s;
	cin>>s;
	vector <ll> l(s.length()+1,0);
		vector <ll> r((s.length()+1),0);
		for(ll i=0;i<s.length();i++)
			if(s[i]=='l')
				l.pb(i+1);
			else
				r.pb(i+1);

			for(ll i=0;i<r.size();i++)
			{
				if(r[i]!=0)
				cout<<r[i]<<" ";
			}
				
			for(ll i=l.size()-1;i>=0;i--)
			{
				if(l[i]!=0)
				cout<<l[i]<<" ";
			}
				
			return 0;



}