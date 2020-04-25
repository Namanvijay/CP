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
		string s,t;
		cin>>s;
		cin>>t;
		string a,b;
		a=s;
		b=t;
		ll w=-1,ans=1;
		vector <char> v;
		ll flg=0;
		//sort(a.begin(),a.end());
		//sort(b.begin(),b.end());
		//for(ll i=0;i<a.size();i++)
		//{
			//v.pb(a[i]);
		//}
		map <char,vector <ll> >m;
		for(ll i=0;i<s.size();i++)
		{
			m[s[i]].pb(i);
		}

		for(ll i=0;i<t.size();i++)
		{
			if(m[t[i]].size()==0)
			{
				flg=1;
				break;
			}

			auto it=upper_bound(m[t[i]].begin(),m[t[i]].end(),w);
			//cout<<*it<<endl;
			if(it==m[t[i]].end())
			{
				ans++;
				w=m[t[i]][0];
			}
			else
			{
				w=*it;
			}
			//cout<<*it<<endl;
		}

		//for(ll i=0;i<b.size();i++)
		//{
			//{
				//flg=1;
				//break;
			//}
		//}
		
		  if(flg==0)
		cout<<ans<<endl;


		   
		
	
		if(flg==1)
			cout<<"-1"<<endl;

	}
	return 0;
}