//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mk make_pair
ll mod=pow(10,9)+7;
int main()
{
	ll t,n,s;
	cin>>n;
	cin>>t;
	
	
		vector <ll> v(n+1);
		for(ll i=1;i<=n;i++)
		{
			cin>>v[i];
		}
	//	for(ll i=1;i<=n;i++)
	//		cout<<"!!!"<<v[i]<<endl;

		vector <ll> v1(n+2);
		for(ll i=1;i<n;i++)
		{
			if(v[i+1]>v[i])
			{
				v1[i+1]=1;
			}
			else
				v1[i+1]=0;

		}
	//	for(ll i=2;i<=n;i++)
			//cout<<v1[i]<<endl;
		//cout<<"^^^"<<v1[2]<<endl;
		ll ma,mi;


		map <ll ,vector <ll> >m;
		m[1].pb(0);
		m[1].pb(0);
		if(v1[2]==1)
		{
			ma=1;
			mi=0;
			m[2].pb(ma);
			m[2].pb(mi);
		}
		else if(v1[2]==0)
		{
			ma=0;
			mi=1;
			m[2].pb(ma);
			m[2].pb(mi);
		}
		for(ll i=3;i<=n;i++)
		{
			if((v1[i]-v1[i-1])==-1)
			{
				mi++;
				m[i].pb(ma);
				m[i].pb(mi);
			}
			else if(v1[i]-v1[i-1]==1)
			{
				ma++;
				m[i].pb(ma);
				m[i].pb(mi);
			}
			else if(v1[i]-v1[i-1]==0)
			{
				m[i].pb(ma);
				m[i].pb(mi);
			}
		}
		//for(auto it=m.begin();it!=m.end();it++)
		//{
			//cout<<"$$$"<<it->first<<"->";
              //     for(ll i=0;i<it->second.size();i++)
                //   	cout<<it->second[i]<<" ";
                  // cout<<"\n";
		//}

		while(t--)
		{
			ll l,h;
			cin>>l>>h;
			ma=0,mi=0;
			
			
			ll ma1=m[h][0];
			ll mi1=m[h][1];
			ll ma2=m[l][0];
			ll mi2=m[l][1];
			if(v1[l+1]==1)
			{
				if(m[l+1][0]==m[l][0])
				{
					ma=ma1-ma2+1;
					mi=mi1-mi2;

				}
				else
				{
					ma=ma1-ma2;
					mi=mi1-mi2;
				}
			}
			else if(v1[l+1]==0)
			{
				
				
					if(m[l+1][1]==m[l][1])
					{
                             ma=ma1-ma2;
                             mi=mi1-mi2+1;
					}
					else
					{
						ma=ma1-ma2;
						mi=mi1-mi2;
					}
				
			}
			//cout<<ma<<endl;
			//cout<<mi<<endl;
			
		
			
			if(ma==mi)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;


		}
		return 0;
		


	
}