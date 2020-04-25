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
		ll a,b,c;
		cin>>a>>b>>c;
		vector <ll> v;
		v.pb(a);
		v.pb(b);
		v.pb(c);
		ll ans;
		sort(v.begin(),v.end());
		if(v[0]==3)
			cout<<6<<endl;
		else if(v[0]>=4)
			cout<<7<<endl;
		else if(v[0]==2)
		{
			if(v[1]==2 && v[2]>=3)
				cout<<5<<endl;
			 else if(v[1]==2 && v[2]==2)
				cout<<4<<endl;
			if(v[1]>=3)
				cout<<5<<endl;

		}
		else if(v[0]==1)
		{
			if(v[1]==1)
				cout<<3<<endl;
			else if(v[1]>=2)
				cout<<4<<endl;
		}
		else if(v[0]==0)
		{
			if(v[1]==0)
			{
				if(v[2]==0)
					cout<<0<<endl;
				else
					cout<<1<<endl;
			}
			else if(v[1]==1)
			{
				cout<<2<<endl;
			}
			else if(v[1]>=2)
				cout<<3<<endl;
				

		}



                                                                                                                            
	}
	return 0;
}                                                                                   