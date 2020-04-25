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
		ll c,m,x;
		cin>>c>>m>>x;
		if((c+m+x)<3)
			cout<<"0"<<endl;
		else if(c==0 || m==0)
			cout<<"0"<<endl;
		else if(c==m)
		{
			if(c<x)
			
				cout<<c<<endl;
			else
			{
				
			ll ans=(c+m+x)/3;
			cout<<ans<<endl;
			}
			

		}
		else {
			ll q=min(c,m);
			if(q>=(c+m+x)/3)
				cout<<(c+m+x)/3<<endl;
			else
				cout<<q<<endl;
		}
	}
	return 0;
}
