//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
	ll r,g,b;
	ll t;
	cin>>t;
	while(t--)
	{
		ll v[3];
		for(ll i=0;i<3;i++)
		{
			cin>>v[i];
		}

	//	for(ll i=0;i<3;i++)
	//		cout<<v[i]<<" ";

		sort(v,v+3);
		if((v[0]+v[1]<=v[2]))
		{
	
			
				ll sum=v[0]+v[1];
		       cout<<sum<<endl;
		}
			else
			{
				ll sum=(v[0]+v[1]+v[2])/2;
				cout<<sum<<endl;
			}



}
	



	return 0;
}