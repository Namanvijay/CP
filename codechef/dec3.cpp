//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k=0;
		cin>>n;
		map <char,ll> m;
		vector <ll> v;
		string s;
		cin>>s;
		for(ll i=0;i<s.length();i++)
		{
             m[s[i]]++;
		}

		for(auto it=m.begin();it!=m.end();it++)
		{
			 if(it->second>=2)
			 {
                    
                    k=k+(it->second);
			 }
			
				
			
		}
		if(k>=1)

		cout<<k-1<<endl;
	else
		cout<<"0"<<endl;
	}
	return 0;
}