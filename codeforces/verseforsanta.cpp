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
		ll n,s,p=0,temp,z,q=0,ans,c=0,sum=0;
		cin>>n>>s;
		vector <ll> v;
		ll arr[n];
		for(ll i=0;i<n;i++)
		{
			ll k;
			cin>>k;
			v.pb(k);
		}
		for(ll i=0;i<n;i++)
		{
			arr[i]=v[i];
			sum=sum+v[i];
		}
		if(sum<=s)
			cout<<"0"<<endl;
		else
		{
			for(ll i=0;i<n;i++)
		{
			 p=p+v[i];
			if(p>s)
			{
				temp=i;
				//cout<<"###"<<temp<<endl;
				break;
				//z=v[i];
			}
				
		}
		sort(arr,arr+(temp+1));
		z=arr[temp];
	//	cout<<"@@@"<<z<<endl;
		for(ll i=0;i<n;i++)
		{
			if(v[i]==z)
			{
				ans=i+1;
				break;
			}
				
		}
		//cout<<"***"<<ans<<endl;
		for(ll i=temp+1;i<n;i++)
		{
			q=q+v[i];
			if(q<=z)
				c++;
		}
		if(c>1)
			cout<<ans<<endl;
		else
			cout<<ans<<endl;
		}


			


		


		
		
	}
	return 0;
}